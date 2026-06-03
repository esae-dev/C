#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_first_digit(int n);

int main(void)
{
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("가장 상위 자리수는 %d입니다.", get_first_digit(x));

	return 0;
}
int get_first_digit(int n)
{
	while (n >= 10) {
		n /= 10;
	}
	return n;
}