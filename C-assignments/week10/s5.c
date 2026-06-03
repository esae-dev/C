#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 2; i <= 100; i++) {
		int prime = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1) printf("%d ", i);
	}
	return 0;
}