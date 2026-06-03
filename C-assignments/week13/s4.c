#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A[6];
	int check[45] = { 0 };
	for (int i = 0; i < 6; ) {
		int num = rand() % 45+1;

		if (check[num-1] == 0) {
			check[num-1] = 1;
			A[i] = num;
			i++;
		}
	}
	printf("로또 번호는 다음과 같습니다.\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", A[i]);
	}
}