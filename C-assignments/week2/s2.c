#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //stdio.h 포함

int main(void)
{
	float inch, mm;
	printf("인치 단위로 입력:");
	scanf("%f", &inch); //값 저장할 주소 설정
	mm = inch * 25.4;
	printf("%f 인치 = %f mm", inch, mm);

	return 0;
}