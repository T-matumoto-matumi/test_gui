from setuptools import setup

package_name = 'move'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='robohan-ros2-5',
    maintainer_email='robohan-ros2-5@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'move_node = move.move_node:main',
            'depth_node = move.depth_node:main',
            'ui_test_node = move.ui_test_node:main',
            'c1_node = move.c1_node:main',
            'purepath_node =move.purepath_node:main ',
            'udp_send_node = move.udp_send_node:main',
            'pid_node = move.pid_node:main',
            'dualshock_node = move.dualshock_node:main',
            'sairo_camera_node = move.sairo_camera_node:main',
            'gui_test_node = move.gui_test_node:main',
            'rotation_node = move.rotation_node:main',
            'ball_search_node = move.ball_search_node:main',
            'udp_receive_node = move.udp_receive_node:main',
            'simulator_node =  move.simulator_node:main' ,
            'lidar_sample_node = move.lidar_sample_node:main',
            'wheel_odom_node = move.wheel_odom_node:main',
            'omuni_node = move.omuni_node:main',
            'kiki_node = move.kiki_node:main'
        ],
    },
)
