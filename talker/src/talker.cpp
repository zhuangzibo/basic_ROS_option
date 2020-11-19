#include "ros/ros.h"
#include "std_msgs/String.h"



std_msgs::String msg;


int main(int argc,char **argv)
{
	ros::init(argc,argv,"talker");
	ros::NodeHandle n;
	ros::Publisher chatter_pub=n.advertise<std_msgs::String>("chatter",1000);
	ros::Rate loop_rate(10);
	ROS_INFO("Test OK");

	while(ros::ok())
	{
		msg.data="I am here\n";
		chatter_pub.publish(msg);
		ros::spinOnce();
		loop_rate.sleep();
	}
	return 0;
}
