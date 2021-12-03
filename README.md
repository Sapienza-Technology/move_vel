# move_vel
nodi che inviano e ricevono messaggi ros di tipo Twist, che sarebber velocità


Su Raspberry c'è in catkin_ws/simple_move_base un nodo che riceve la velocità e muove le ruote. 
Non funziona però se eseguito da dispositivi diversi (problemi con ROS_MASTER_URI e simili).


nota: su raspberry non sono riuscito a far funzionare catkin build e funziona solo il make
