#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60
#include <stdio.h>
int main(void)
{
	int input, minute, second, hour;
	printf("초를 입력하시오: ");
	scanf("%d", &input);

	hour = input / (SEC_PER_MINUTE * SEC_PER_MINUTE);
	minute = input % 3600 / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d시간 %d분 %d초입니다.", input, hour, minute, second);

	return 0;
}