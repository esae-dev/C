#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void)
{
	int x1, x2, y1, y2;
	printf("첫 번째 점의 좌표를 입력하시오: ");
	scanf("%d %d", &x1, &y1);
	printf("두 번째 점의 좌표를 입력하시오: ");
	scanf("%d %d", &x2, &y2);

	printf("두 점 사이의 거리는 %.6lf입니다.", get_distance(x1, y1, x2, y2));
}
double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}