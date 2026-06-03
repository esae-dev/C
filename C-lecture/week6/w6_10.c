#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x;
	scanf("%lf", &x);

	if (x <= 50.80) printf("Flyweight");
	else if (x <= 61.23) printf("Lightweight");
	else if (x <= 72.57) printf("Middleweight");
	else if (x <= 88.45) printf("Cruiserweight");
	else printf("Heavyweight");

	return 0;
}