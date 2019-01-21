#include <ros_cpp_template_ns/RosCppTemplate.h>


namespace ros_cpp_template_ns
{
   RosCppTemplate::RosCppTemplate()
   {

	    ROS_INFO("Starting ros cpp template node ");

   	  	// Parameters
	    /* bool got_params = n_.getParam("", );

      	if(!got_params)
    	{
        	ROS_ERROR("Valid params not found, RosCppTemplate will shutdown!");
        	ros::shutdown();
        	exit(1);
    	} */

      	//Topic you want to publish
      	pub_ = n_.advertise<std_msgs::Int32>("pub_topic", 100);

      	//Topic you want to subscribe
  	  	sub_ = n_.subscribe("sub_topic",10, &RosCppTemplate::callback, this);
  	}
  
	void RosCppTemplate::callback (const std_msgs::Bool& msg)
	{
		// Takes data from input
		bool status = msg.data;

		// Generates the output
		std_msgs::Int32 outputMsg;
  	  	
		// Publish the output
  	  	pub_.publish(outputMsg);	
		
	}

} // Namespace ros_cpp_template_ns

