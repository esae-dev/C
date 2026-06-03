#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y, a,b,c,d;
	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	a = x + y;
	b = x - y;
	c = x * y;
	d = x / y;

	printf("%.2lf %.2lf %.2lf %.2lf", a, b, c, d);

	return 0;
}