#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

long factorial(int n);

int main(void)
{
	int n = 0;
	long f;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("%d! 의 결과는 %d입니다", factorial(n));

	return 0;
}

long factorial(int n)
{

	return factorial(n);
}