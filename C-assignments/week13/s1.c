#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int S[10];

	for (int i = 0; i < 10; i++) {
		S[i] = rand();
	}
	int max = S[0];
	int min = S[0];

	for (int j = 1; j < 10; j++) {
		if (S[j] > max) max = S[j];
		if (S[j] < min) min = S[j];
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);
}