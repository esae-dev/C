#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void get_integer(int list[], int n);
int cal_sum(int list[], int n);

int main(void)
{
	int list[SIZE];
	printf("합 = %d \n", cal_sum(list, SIZE));

	return 0;
}
void get_integer(int list[], int n)
{
	printf("%d 개의 정수를 입력하시오: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	return list[n];
}
int cal_sum(int list[], int n)
{
	int Sum = 0;
	get_integer(list, SIZE);

	for (int i = 0; i < SIZE; i++) {
		Sum += list[i];
	}

	return Sum;
}