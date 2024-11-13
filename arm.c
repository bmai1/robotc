void armDown(int arm_speed) {
    motor[port2] = -arm_speed;
    wait1Msec(500);
    motor[port2] = 0;
}

void armUp(int arm_speed) {
    motor[port2] = arm_speed;
    wait1Msec(500);
    motor[port2] = 0;
}