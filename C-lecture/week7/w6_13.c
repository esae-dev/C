#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y, m, t;
	scanf("%lf", &x);
	if (x < 12000000) { t = 0.06; m = 0; }
	else if (x >= 12000000 && x < 46000000) { t = 0.15, m = 1080000; }
	else if (x >= 46000000 && x < 88000000) { t = 0.24, m = 5220000; }
	else if (x >= 88000000 && x < 150000000) { t = 0.35, m = 14900000; }
	else if (x >= 150000000 && x < 300000000) { t = 0.38, m = 19400000; }
	else if (x >= 300000000 && x < 500000000) { t = 0.4, m = 25400000; }
	else if (x >= 500000000 && x < 1000000000) { t = 0.42, m = 35400000; }
	else { t = 0.45, m = 65400000; }
	y = x * t - m;
	printf("%.0f", y);
}