#ifndef DASHBOARD_DISPLAY_H
#define DASHBOARD_DISPLAY_H

// Structure representing Dashboard Display (Encapsulation)
struct DashboardDisplay {
    float currentSpeed;
    float engineTemperature;
};

// Function prototypes for dashboard display
struct DashboardDisplay* createDashboardDisplay();
void updateDisplay(struct DashboardDisplay* display);
void showDisplay(const struct DashboardDisplay* display);
void destroyDisplay(struct DashboardDisplay* display);

#endif
