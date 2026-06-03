#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int user = 1, guess = 0;
	int low = 0, high = 100;
	printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n");
	printf("하나의 숫자를 생각하세요.\n");
	printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1이라고 하세요.\n");
	printf("컴퓨터가 숫자를 맞히면 0이라고 하세요.\n");
	for (; user != 0;) {
		guess = (low + high) / 2;
		printf("숫자가 %d인가요? ", guess);
		scanf("%d", &user);
		if (user == 1) low = guess + 1;
		if (user == -1) high = guess - 1;
	}
}