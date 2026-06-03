#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, sum = 100;
	for (;;) {
		printf("현재 연료량: %d\n", sum);
		if (sum < 20) printf("(경고) 연료가 20리터 미만입니다.\n");
		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf("%d", &x);
		sum += x;
		printf("\n");
	}
}