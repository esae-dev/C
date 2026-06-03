#include <stdio.h>
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

	printf("swap 함수에서: a = %d, b = %d \n", *a, *b);
	return 0;
}
int main(void)
{
	int a = 1, b = 2;
	printf("swap 호출전: a = %d, b = %d \n", a, b);
	swap(&a, &b);
	printf("swap 호출후: a = %d, b = %d \n", a, b);
	
	return 0;
}