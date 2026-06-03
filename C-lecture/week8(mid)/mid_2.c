#define _CRT_SECURE_NO_WARNINGS
#define TAX 0.1
#include <stdio.h>

int main(void)
{
	double x, sum = 0;
	printf("월급을 입력하시오: ");
	scanf("%lf", &x);
	
	sum = x - (x * TAX);
	printf("세금을 제외한 실수령액은 %.2f 입니다\n", sum);
	
	return 0;
}