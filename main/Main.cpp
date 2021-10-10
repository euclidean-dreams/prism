#include "Prism.h"

void entrypoint();

extern "C" {
#include "Wifi.h"
#include "UdpServer.h"
void app_main(void) {
    entrypoint();
}

}

void entrypoint() {
    initializeNvs();
    initializeWifi();
//    prism::Prism();
    go();
}
