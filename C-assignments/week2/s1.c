#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //stdio.h 불러오기

int main(void) //메인 설정, 가져오는 값 없음
{
	int x, y; //변수 x, y 설정

	scanf("%d %d", &x, &y); //입력값 받도록 설정
	printf("덧셈: %d\n", x + y); //x + y
	printf("뺄셈: %d\n", x - y); //x - y
	printf("곱셈: %d\n", x * y); //x * y
	printf("나눗셈: %d\n", x / y); //x / y

	return 0; //함수 종료, 변환값 0
}