#include "ros/ros.h"
#include "my_msg/my_msg.h"

int main(int argc,char **argv)
{
	my_msg::my_msg msg;
	msg.direction_left=1;
	ROS_INFO("direction_left=[%d]",msg.direction_left);
	return 0;
}
