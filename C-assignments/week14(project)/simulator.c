#include <stdlib.h>
#include "simulator.h"

int cpu = 30, mem = 40, disk = 50, net = 20;
int mode = 1;
int time_sec = 0;
int event_count = 0;

void updateValues(void) {
    if (mode == 1) {          // Normal
        cpu += rand() % 5 - 2;
        mem += rand() % 5 - 2;
        disk += rand() % 5 - 2;
        net += rand() % 5 - 2;
    }
    else if (mode == 2) {   // Stress
        cpu += rand() % 15;
        mem += rand() % 10;
        disk += rand() % 12;
        net += rand() % 8;
    }
    else if (mode == 3) {   // Recovery
        cpu -= rand() % 8;
        mem -= rand() % 6;
        disk -= rand() % 7;
        net -= rand() % 5;
    }

    if (cpu < 0) cpu = 0; if (cpu > 100) cpu = 100;
    if (mem < 0) mem = 0; if (mem > 100) mem = 100;
    if (disk < 0) disk = 0; if (disk > 100) disk = 100;
    if (net < 0) net = 0; if (net > 100) net = 100;
}