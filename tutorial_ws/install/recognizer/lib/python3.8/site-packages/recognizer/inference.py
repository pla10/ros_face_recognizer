import os
import cv2
import json
import rclpy

from rclpy.node import Node
from std_msgs.msg import String

import argparse
import numpy as np
import torch
from scipy.spatial.distance import cdist
from PIL import Image

import torch.nn.functional as F

# from backbones import get_model
from .iresnet import iresnet50

device = torch.device("cuda:0") if torch.cuda.is_available() else torch.device("cpu")

gallery_folder = "/home/eecs/tutorial_ws/gallery"

class MinimalPublisher(Node):

	def __init__(self):
		super().__init__('minimal_publisher')
		self.publisher_ = self.create_publisher(String, 'recognized_person', 10)
		timer_period = 0.5  # seconds
		self.timer = self.create_timer(timer_period, self.timer_callback)
		
		self.net = iresnet50(fp16=False).to(device)
		self.net.load_state_dict(torch.load("/home/eecs/tutorial_ws/src/recognizer/recognizer/backbone.pth", map_location=torch.device('cpu')))
		self.net.eval()


	def timer_callback(self):
		identity = inference(self.net)
		msg = String()
		msg.data = str(identity)
		self.publisher_.publish(msg)
		self.get_logger().info('Publishing: "%s"' % msg.data)



def image_path_to_tensor(image_path):
    image = cv2.imread(image_path)
    image = cv2.resize(image, (112, 112))
    image = np.transpose(image, (2, 0, 1))
    image = image.astype(np.float32)
    image = torch.from_numpy(image)
    image.div_(255).sub_(0.5).div_(0.5)
    image = image.unsqueeze(0)
    image = image.cuda()
    return image
    # print(image_path, image.shape)


def forward(model, image):
    with torch.no_grad():
        features = model(image)
    features = F.normalize(features, p=2.)
    features = features.squeeze().cpu().numpy()
    return features


def pil_to_tensor(image):
    image = image.convert("RGB")
    image = image.resize((112, 112))
    image = np.transpose(image, (2, 0, 1))
    image = image.astype(np.float32)
    image = torch.from_numpy(image)
    image.div_(255).sub_(0.5).div_(0.5)
    image = image.unsqueeze(0)
    image = image.to(device)
    return image

def tensor_transform(t):
    _t = F.interpolate(t, (112, 112)).float()
    # _t.sub_(0.5).div_(0.5)

    return _t.cuda()


@torch.no_grad()
def inference(net):

	elems = os.listdir('/home/eecs/tutorial_ws/saved_images')
	elems.sort()
	query_path = os.path.join('/home/eecs/tutorial_ws/saved_images', elems[-1])
	for img in elems[:-1]:
		os.remove(os.path.join('/home/eecs/tutorial_ws/saved_images', img))
	gallery_embeddings = []
	   
	tmp = Image.open(query_path).convert("RGB")
	face = pil_to_tensor(tmp)
	query_embedding = forward(net, face)
	# print(query_embedding.shape)
	query_embeddings = []
	query_embeddings.append(query_embedding)

	for gallery_file in os.listdir(gallery_folder):
		gallery_path = os.path.join(gallery_folder, gallery_file)
		gallery_embedding = torch.load(gallery_path).to(device)
		gallery_embeddings.append(gallery_embedding)

	query_embeddings = np.array(query_embeddings)
	gallery_embeddings = np.array(gallery_embeddings)

	# build similarity matrix using cdist and cosine similarity
	similarity_matrix = cdist(query_embeddings, gallery_embeddings, metric="cosine")
	# similarity_matrix = cdist(query_embeddings, gallery_embeddings, 'minkowski', p=1.)

	identity = similarity_matrix[0].argsort[0]

	return identity

def main(args=None):

	rclpy.init(args=args)

	minimal_publisher = MinimalPublisher()

	rclpy.spin(minimal_publisher)

	# Destroy the node explicitly
	# (optional - otherwise it will be done automatically
	# when the garbage collector destroys the node object)
	minimal_publisher.destroy_node()
	rclpy.shutdown()

if __name__ == '__main__':
    main()
