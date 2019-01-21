
#include <ros_cpp_template_ns/RosCppTemplate.h>

int main (int argc, char ** argv)
{
  ros::init (argc, argv, "ros_cpp_template");
  
  ros_cpp_template_ns::RosCppTemplate rosCppObject;

  ros::spin();

  return 0;
}
