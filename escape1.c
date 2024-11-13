#pragma config(Sensor, dgtl5,  bumper,         sensorDigitalIn)

void escape1() {
    motor[port1] = -forward_speed;
    motor[port10] = -forward_speed;

    wait1Msec(5000);

    while (true) {
        if (SensorValue[bumper] == 0) {
            motor[port1] = forward_speed;
            motor[port10] = forward_speed;
            wait1Msec(1000);
            motor[port1] = 0;
            motor[port10] = 0;

            motor[port1] = 50;
            wait1Msec(1500);

            motor[port1] = -forward_speed;
            motor[port10] = -forward_speed;
        }
    }
}