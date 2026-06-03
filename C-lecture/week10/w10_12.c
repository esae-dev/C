#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year = 0, money = 1000000;
	while (1) {
		year++;
		money += money * 0.30;
		if (money > 10 * 1000000) break;
	}
	printf("%d", year);
	return 0;
}