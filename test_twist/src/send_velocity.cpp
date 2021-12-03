#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include <sstream>


int main(int argc, char **argv)
{
 
  ros::init(argc, argv, "send_velocity");

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;


    //cambio qui 
  ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("topic_vel", 1000);

  ros::Rate loop_rate(10);


  while (ros::ok())
  {
    geometry_msgs::Twist msg;

    msg.linear.x=1;
    msg.angular.y=5;

    
    vel_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();

  }


  return 0;
}