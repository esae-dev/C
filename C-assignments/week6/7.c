#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("2를 곱하고싶은 횟수: ");
	scanf("%d", &y);

	printf("%d<<%d의 값: %d", x, y, x << y);
}