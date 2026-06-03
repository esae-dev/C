#include <stdio.h>
int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;

	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("빛의속도는%fkm/s\n", light_speed);
	printf("태양과지구와의거리%fkm\n", distance);
	printf("도달시간은%f초\n", time);

	return 0;
}