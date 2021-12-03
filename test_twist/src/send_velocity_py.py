#!/usr/bin/env python
# license removed for brevity
import rospy
from geometry_msgs.msg import Twist

def talker():
    pub = rospy.Publisher('topic_vel', Twist, queue_size=10)
    rospy.init_node('send_velocity_py', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        print("ciao ho ivniato")
        move_cmd = Twist()
        move_cmd.linear.x = 1.0
        #move_cmd.angular.z = 1.0
        pub.publish(move_cmd)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass