#include <stdio.h>
#include <math.h>

int main(void)
{
	int result;
	double a = 1.0 - 0.9;
	double b = 0.1;

	result = (fabs(a - b) < 1e-6);
	printf("(1.0-0.9)==0.1은 %d 입니다.", result);

	return 0;
}