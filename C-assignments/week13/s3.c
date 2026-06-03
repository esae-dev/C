#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A[100], max;
	int count[10] = { 0 };
	for (int i = 0; i < 100; i++) {
		A[i] = rand() % 10;
		count[A[i]]++;
	}
	max = count[0];
	int maxnum = 0;
	for (int j = 0; j < 10; j++) {
		if (max < count[j]) {
			max = count[j];
			maxnum = j;
		}
	}
	printf("가장 많이 나온 수 = %d", maxnum);
}