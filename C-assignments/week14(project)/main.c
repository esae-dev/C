#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "simulator.h"
#include "render.h"
#include "util.h"

int main(void) {
    char input;
    srand((unsigned int)time(NULL));

    while (1) {
        updateValues();
        renderScreen();
        time_sec++;

        if (_kbhit()) {
            input = _getch();
            if (input == '1') mode = 1;
            else if (input == '2') mode = 2;
            else if (input == '3') mode = 3;
            else if (input == 'q') break;
        }

        SLEEP(1);
    }

    system(CLEAR);
    printf("Simulation terminated.\n");
    return 0;
}
