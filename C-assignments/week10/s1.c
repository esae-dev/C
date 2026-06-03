#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, A, Z;
	double sum = 0;
	printf("반복횟수: ");
	scanf("%d", &N);


	for (int i = 0; i < N; i++) {
		double term = 4.0 / (2 * i + 1);
		if (i % 2 == 1) term *= -1;
		sum += term;
	}
	printf("파이값: %f", sum);
}