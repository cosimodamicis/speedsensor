#include <stdio.h>
#include "speed_sensor.h"
#include "engine_sensor.h"
#include "dashboard_display.h"

int main() {
    struct DashboardDisplay* display = createDashboardDisplay();

    // Update and display speed and engine temperature using abstraction and encapsulation
    updateDisplay(display);
    showDisplay(display);

    // Cleanup
    destroyDisplay(display);

    return 0;
}
