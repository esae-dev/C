#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, n, sum=0;
	float avg;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		sum += x;
	}
	avg = (float)sum / n;
	printf("avg: %.1f\n", avg);
	if (avg >= 80) printf("pass");
	else printf("fail");
}