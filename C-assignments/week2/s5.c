#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1000000000;
	int ysalary;
	float year;

	printf("연봉을 입력하시오(단위: 만원:");
	scanf("%d", &ysalary);
	year = x / (10000 * ysalary);
	printf("10억을 모으는데 걸리는 시간: %f", year);

	return 0;
}