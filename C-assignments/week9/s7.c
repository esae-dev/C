#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, r, a, b;
	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);
	a = x;
	b = y;

	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	printf("최소공배수는 %d입니다.", x * y / a);
}