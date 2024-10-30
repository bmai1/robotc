#include <stdbool.h>
#include "gotobeacon.c"
#include "lever.c"
#include "escape.c"


task main() {
    bool foundRed = false;
    bool foundGreen = false;

    freq = 0; // 0 = 1 khz (red)
	ambient_level = 200;
	slow_level = 5000;
	stop_level = 6000;
	expose_time = 5; 
	steer_sensitivity = 20;
	forward_speed = 35;
	slow_speed = 25;
	spin_speed = 50; 
	SensorValue[digital10] = freq;

    while (!foundRed) {
        ReadPD();
		Find_max();
		Move();
    }

    // run lever.c 

    freq = 1; // 1 = 10 khz (green)
    while (!foundGreen) {
        ReadPD();
		Find_max();
		Move();
    }

    // run escape.c
}