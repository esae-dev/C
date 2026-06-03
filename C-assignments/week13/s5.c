#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int M[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	int rowsum, colsum;
	for (int i = 0; i < 3; i++) {
		rowsum = 0;
		for (int j = 0; j < 5; j++) {
			rowsum += M[i][j];
		}
		printf("%d행의 합계: %d\n", i, rowsum);
	}
	for (int j = 0; j < 5; j++) {
		colsum = 0;
		for (int i = 0; i < 3; i++) {
			colsum += M[i][j];
		}
		printf("%d열의 합계: %d\n", j, colsum);
	}
}