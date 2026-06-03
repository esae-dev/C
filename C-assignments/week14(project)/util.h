#ifndef UTIL_H
#define UTIL_H

#ifdef _WIN32
#include <windows.h>
#define CLEAR "cls"
#define SLEEP(x) Sleep((x)*1000)
#else
#include <unistd.h>
#define CLEAR "clear"
#define SLEEP(x) sleep(x)
#endif

#endif
#pragma once
