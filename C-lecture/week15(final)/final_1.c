#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#define SIZE 6
int main(void)
{
	int lotto[SIZE];
	int check[46] = { 0 };
	int i = 0, A[7];

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) {
		A[i] = rand() % 45 + 1;
		if (check[A[i]] != 1) printf("lotto[%d] : %d\n", i, A[i]);
		check[A[i]] == 1;
	}

	return 0;
}