#include <stdio.h>

int main()
{
	int radius = 5;
	double pi = 3.14;
	float sq;
	float len;

	sq = pi * radius * radius;
	len = 2 * pi * radius;

	printf("square : %.1f\n", sq);
	printf("length : %.1f\n", len);

	return 0;
}