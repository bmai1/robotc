void armDown() {
    // set armMotor to half speed for half a second
    motor[port2] = -100;
    wait1Msec(500);
    motor[port2] = 0;
}

void armUp() {
    motor[port2] = 100;
    wait1Msec(500);
    motor[port2] = 0;
}