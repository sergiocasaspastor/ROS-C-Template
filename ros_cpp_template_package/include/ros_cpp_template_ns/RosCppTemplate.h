// Headers
#include "ros/ros.h"

#include <err.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <cmath>

#include <std_msgs/Bool.h>
#include <std_msgs/Int32.h>

namespace ros_cpp_template_ns
{

	class RosCppTemplate
	{

  		private:

    	ros::NodeHandle n_;
    	ros::Publisher pub_;
    	ros::Subscriber sub_;

  		public:

    	RosCppTemplate();

    	void callback(const std_msgs::Bool& msg);
	};

}; // Namespace ros_cpp_template_ns
