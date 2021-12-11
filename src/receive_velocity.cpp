#include "ros/ros.h"
#include "geometry_msgs/Twist.h"


void velCallback(const geometry_msgs::Twist::ConstPtr& msg)
{
  //ROS_INFO("I heard: [%s]", msg->linear.x);
  std::cout << "ciao" << msg->linear.x << std::endl;
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "receive_velocity");

  ros::NodeHandle n;

 
  ros::Subscriber sub = n.subscribe("topic_vel", 1000, velCallback);

  ros::spin();

  return 0;
}