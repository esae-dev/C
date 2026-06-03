#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int randint(int x);
int main(void)
{
	for (int i = 0; i < 10; i++) {
		printf("%d ", randint(i));
	}
	return 0;
}
int randint(void)
{
	return 10 + rand() % 81;
}