#include <stdio.h>
int main(void)
{
	int year, month, days;
	printf("연도와 달을 입력하시오: ");
	scanf_s("%d %d", &year, &month);

	if (month < 1 || month> 12) printf("잘못 입력했습니다");
	else {
	switch (month)
	{
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) days = 29;
		else days = 28;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d월의 일수는 %d입니다.\n", month, days);
}
	return 0;
}