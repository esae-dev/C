#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main(void)
{
	int a[10], b[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 10; j++) {
		scanf("%d", &b[j]);
	}
	if (array_equal(a, b, 10)) printf("2개의 배열은 같음");
	else printf("2개의 배열은 다름");
}

int array_equal(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) return 0;
	} return 1;
}