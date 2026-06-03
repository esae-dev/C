#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int x);
double eular(int x);
int main(void)
{
	int x;
	printf("어디까지 계산할까요: ");
	scanf("%d", &x);
	printf("오일러의 수는 %.6lf입니다.", eular(x));
}
int factorial(int x)
{
	int sum = 1;
	for (int i = 1; i <= x; i++) {
		sum *= i;
	}
	return sum;
}
double eular(int x)
{
	double sum = 1;
	for (int i = 1; i <= x; i++) {
		sum += 1.0/factorial(i);
	}
	return sum;
}