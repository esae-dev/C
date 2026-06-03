#include <stdio.h>
#include <stdlib.h>
#include "render.h"
#include "simulator.h"
#include "util.h"

static void drawBar(int value) {
    int bars = value / 10;
    for (int i = 0; i < 10; i++) {
        if (i < bars) printf("#");
        else printf("-");
    }
}

static void printStatus(void) {
    if (cpu > 85 || disk > 90) {
        printf("[STATUS] CRITICAL WARNING\n");
        event_count++;
    }
    else if (cpu > 70 || mem > 70) {
        printf("[STATUS] HIGH LOAD\n");
    }
    else {
        printf("[STATUS] SYSTEM STABLE\n");
    }
}

void renderScreen(void) {
    system(CLEAR);

    printf("====================================\n");
    printf("  SYSTEM STATUS SIMULATOR (C)\n");
    printf("====================================\n\n");

    printf("CPU Usage   : "); drawBar(cpu);  printf(" %d%%\n", cpu);
    printf("Memory Usage: "); drawBar(mem);  printf(" %d%%\n", mem);
    printf("Disk Usage  : "); drawBar(disk); printf(" %d%%\n", disk);
    printf("Network I/O : "); drawBar(net);  printf(" %d%%\n\n", net);

    printf("Running Time: %d sec\n", time_sec);
    printf("Events      : %d\n\n", event_count);

    printStatus();

    printf("\n------------------------------------\n");
    printf("[1] Normal  [2] Stress  [3] Recovery\n");
    printf("[q] Quit\n");
}
