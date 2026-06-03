#ifndef SIMULATOR_H
#define SIMULATOR_H

extern int cpu, mem, disk, net;
extern int mode;
extern int time_sec;
extern int event_count;

void updateValues(void);

#endif