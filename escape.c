#pragma config(Sensor, dgtl5,  bumper,         sensorDigitalIn)


void escape() {
    while (true) {
        // sensor == 0 means bumper is pressed
        if (SensorValue[bumper] == 0) {
            // move forward
        	motor[port1] = -60;
        	motor[port10] = 60;
        	wait1Msec(250);

            // turn
            motor[port1] = -60;  
            motor[port10] = -60;
            wait1Msec(500);
        }
        else {
        	// move backward
			motor[port1] = 60;
			motor[port10] = -60;
      	}
    }
}