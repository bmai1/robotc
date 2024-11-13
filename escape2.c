#pragma config(Sensor, dgtl5,  bumper,         sensorDigitalIn)

void escape2() {
    motor[port1] = -forward_speed;
    motor[port10] = -forward_speed;
}