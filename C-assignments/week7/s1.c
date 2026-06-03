#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	int min = x;
	min = (min > y) ? y : min;
	min = (min > z) ? z : min;
	printf("제일 작은 정수는 %d입니다.", min);

	return 0;
}