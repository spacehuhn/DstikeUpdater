#ifndef DstikeUpdater_h
#define DstikeUpdater_h

#include <OLEDDisplay.h> // OLED

#ifndef UPDATER_PATH
#define UPDATER_PATH "/update"
#endif // ifndef BUTTON_SELECT

#ifndef LOADING_DELAY
#define LOADING_DELAY 3500
#endif // ifndef BUTTON_SELECT

#define DSTIKE_UPDATER_V_1_0_0

class DstikeUpdater {
    public:
        static void run(OLEDDisplay & display, int up, int down, int select, const char* path = UPDATER_PATH, int loading_delay = LOADING_DELAY);

#endif // ifndef DstikeUpdater_h