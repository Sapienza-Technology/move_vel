#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist

def callback(data):
    rospy.loginfo( f"I heard {data.linear.x}" )
    
def listener():

    rospy.init_node('listener_node_py', anonymous=True)

    rospy.Subscriber("topic_vel", Twist, callback)

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()
if __name__ == '__main__':
    try:
        listener()
    except rospy.ROSInterruptException:
        pass