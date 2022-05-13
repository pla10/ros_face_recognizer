import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    urdf_file_name = 'r2d2.urdf.xml'
    urdf = os.path.join(
        get_package_share_directory('r2d2_urdf'),
        urdf_file_name)
    with open(urdf, 'r') as infp:
        robot_desc = infp.read()

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation clock if true'),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time, 'robot_description': robot_desc}],
            arguments=[urdf]),
        Node(
            package='r2d2_urdf',
            executable='r2d2_state_publisher',
            name='r2d2_state_publisher',
            output='screen'),
        Node(
            package='py_pub',
            executable='image_talker',
            name='image_talker'
        ),
        Node(
            package='py_sub',
            executable='image_listener_processor',
            name='image_listener_processor',
            arguments = ['/home/eecs/tutorial_ws/saved_images']
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            arguments  = ['-d', '/home/eecs/tutorial_ws/src/r2d2_urdf/urdf/r2d2.rviz'],
            name='my_visualiser'
        ),
        Node(
        		package='recognizer',
        		executable='recognizer',
        		name='recognizer'
        )
    ])
