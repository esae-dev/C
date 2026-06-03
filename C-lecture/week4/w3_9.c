#include <stdio.h>

int main(void)
{
	float x = 1.23456780123456789;
	double y = 1.234567890123456789;
	printf("float의 크기 = %d\n", sizeof(float));
	printf("double의 크기 = %d\n", sizeof(double));
	printf("x = %30.25f\n", x);
	printf("y = %30.25lf\n", y);

	return 0;
}