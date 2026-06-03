#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int com, user;
	srand((unsigned int)time(NULL));
	printf("1: 가위, 2:바위, 3:보 중에서 하나를 선택하시오");
	scanf("%d", &user);

	com = rand()%3+1;
	switch (com)
	{
	case 1: printf("컴퓨터는 가위를 선택하였습니다\n"); break;
	case 2: printf("컴퓨터는 바위를 선택하였습니다\n"); break;
	case 3: printf("컴퓨터는 보를 선택하였습니다\n"); break;
	}
	if (user == com)
		printf("비겼습니다\n");
	else if ((user == 1 && com == 3) ||
		(user == 2 && com == 1) ||
		(user == 3 && com == 2))
		printf("사용자가 이겼습니다\n");
	else
		printf("컴퓨터가 이겼습니다\n");

	return 0;
}