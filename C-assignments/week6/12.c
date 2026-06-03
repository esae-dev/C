#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int result;
	unsigned char a, b, c, d;
	printf("첫 번째 문자를 입력하시오: ");
	scanf(" %c", &a);
	printf("두 번째 문자를 입력하시오: ");
	scanf(" %c", &b);
	printf("세 번째 문자를 입력하시오: ");
	scanf(" %c", &c);
	printf("네 번째 문자를 입력하시오: ");
	scanf(" %c", &d);

	result = a | (b << 8) | (c << 16) | (d << 24);
	printf("결과값: %x", result);

	return 0;
}

