#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char X;
	printf("문자를 입력하시오: ");
	scanf("%c", &X);
	X = getchar();

	if (X == 'R' || X == 'r') printf("Rectangle");
	else if (X == 'T' || X == 't') printf("Triangle");
	else if (X == 'C' || X == 'c') printf("Circle");

	return 0;
}