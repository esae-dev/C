#include <stdio.h>

void scalar_mult(int a[][3], int scalar);
void transpose(int a[][3], int b[][3]);
void print_matrix(int m[][3]);

int main(void)
{
	int A[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int A_copy[3][3];
	int B[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A_copy[i][j] = A[i][j];
		}
	}

	scalar_mult(A, 2);
	print_matrix(A);
	printf("\n");
	transpose(A_copy, B);
	print_matrix(B);

	return 0;
}

void scalar_mult(int a[][3], int scalar)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] *= scalar;
		}
	}
}

void transpose(int a[][3], int b[][3])
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[j][i] = a[i][j];
		}
	}
}
void print_matrix(int m[][3])
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", m[i][j]);
		}
		printf("\n");
	}
}