#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, sum = 0;
	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x <= 0) sum = pow(x, 2) - 9 * x + 2;
	else sum = 7 * x + 2;

	printf("f(x)의 값은 %f입니다.", sum);

	return 0;
}