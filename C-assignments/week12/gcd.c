#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
	printf("%d\n", gcd(30, 20));
}

int gcd(int x, int y)
{
	if (y == 0) return x;
	else gcd(y, x % y);
}