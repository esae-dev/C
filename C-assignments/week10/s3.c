#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int count = 0, A = 50, Z = 250;
	srand(time(NULL));
	printf("초기 금액 $50\n");
	printf("목표 금액 $250\n");
	for (int i = 0; i < 100; i++) {
		int money = A;
		for (; money > 0 && money < 250;) {
			int x = rand() % 2	;
			if (x == 1) money ++;
			else money --;
		}
		if (money >= Z) count++;
	}
	printf("100번중에서 %d번 성공", count);
}