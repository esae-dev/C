#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int x = 12, y;
	for (; x > 0;) {
		printf("현재 스틱의 개수: %d\n", x);
		printf("몇개의 스틱을 가져가시겠습니까? : ");
		scanf("%d", &y);
		int com = rand() % 3+1;
		if (com > x) com = x;
		printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", com);
		x -= (y + com);
	}
	
}