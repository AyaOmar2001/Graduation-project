#include "ros/ros.h"
#include "std_msgs/Int32.h"

/**
 * This tutorial demonstrates simple receipt of messages over the ROS system.
 */
void intCallback(const std_msgs::Int32::ConstPtr& int_msg)
{
  int count =int_msg->data ;
  std::cout <<" integer data " <<  count <<std::endl;
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "integer_sub_node");

  ros::NodeHandle n;

  ros::Subscriber int_sub = n.subscribe("int_count", 1000, intCallback);

 
  ros::spin();

  return 0;
}