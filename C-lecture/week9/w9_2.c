#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;

	printf("=============\n");
	printf("  n    nÀÇ Á¦°ö\n");
	printf("=============\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d  %5.0f\n", n, pow((double)n, 2));
		n++;
	}

	return 0;
}