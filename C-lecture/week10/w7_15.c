#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	srand(time(NULL));
	int a, b, c, d, e;
	do {
		a = rand() % 46;
		b = rand() % 46;
		c = rand() % 46;
		d = rand() % 46;
		e = rand() % 46;
	} while (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e);

		printf("%d %d %d %d %d", a, b, c, d, e);

		return 0;
}