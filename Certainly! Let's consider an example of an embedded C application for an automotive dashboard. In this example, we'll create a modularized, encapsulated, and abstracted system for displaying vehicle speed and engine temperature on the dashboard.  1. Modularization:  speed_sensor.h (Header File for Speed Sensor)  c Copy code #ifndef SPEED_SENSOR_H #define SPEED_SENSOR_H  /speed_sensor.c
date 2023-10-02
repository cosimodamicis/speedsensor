#include "speed_sensor.h"
#include <stdio.h>

void initializeSpeedSensor() {
    // Initialize speed sensor hardware and settings
    printf("Speed sensor initialized.\n");
}

float readSpeed() {
    // Read vehicle speed from the sensor (simulated value)
    float speed = 60.5; // Simulated speed value in km/h
    return speed;
}
