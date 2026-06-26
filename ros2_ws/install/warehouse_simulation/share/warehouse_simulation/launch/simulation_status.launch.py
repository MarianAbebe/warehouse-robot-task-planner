from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='warehouse_simulation',
            executable='simulation_status_node',
            name='simulation_status_node',
            output='screen'
        )
    ])

