#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
	int user;
	printf("(1:가위, 2:바위, 3:보)중에서 하나를 선택하시오: ");
	scanf("%d", &user);

	srand(time(NULL));
	int com = rand() % 3 + 1;
	if (com == 1)  printf("컴퓨터는 가위를 선택하였습니다.\n");
	else if (com == 2)  printf("컴퓨터는 바위를 선택하였습니다.\n");
	else if (com == 3)  printf("컴퓨터는 보를 선택하였습니다.\n");

	if (user - com == 0) printf("비겼습니다.");
	else if (user - com == -2 || user - com == 1) printf("사용자가 이겼습니다.");
	else printf("컴퓨터가 이겼습니다.");

	return 0;
}