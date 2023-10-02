#include "dashboard_display.h"
#include "speed_sensor.h"
#include "engine_sensor.h"
#include <stdlib.h>

struct DashboardDisplay* createDashboardDisplay() {
    struct DashboardDisplay* display = (struct DashboardDisplay*)malloc(sizeof(struct DashboardDisplay));
    if (display != NULL) {
        display->currentSpeed = 0.0;
        display->engineTemperature = 0.0;
        initializeSpeedSensor();
        initializeEngineSensor();
    }
    return display;
}

void updateDisplay(struct DashboardDisplay* display) {
    // Update speed and engine temperature using encapsulated functions
    display->currentSpeed = readSpeed();
    display->engineTemperature = readEngineTemperature();
}

void showDisplay(const struct DashboardDisplay* display) {
    printf("Speed: %.2f km/h\n", display->currentSpeed);
    printf("Engine Temperature: %.2f°C\n", display->engineTemperature);
}

void destroyDisplay(struct DashboardDisplay* display) {
    free(display);
}
