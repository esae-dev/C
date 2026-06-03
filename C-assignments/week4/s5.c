#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double m, v;
	double kenergy;

	printf("질량(kg): ");
	scanf("%lf", &m);
	printf("속도(m/s): ");
	scanf("%lf", &v);

	kenergy = 0.5 * m * v * v;

	printf("%lf", kenergy);

	return 0;

}