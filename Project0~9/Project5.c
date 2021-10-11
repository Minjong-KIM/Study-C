#include <stdio.h>

int main()
{
	int radius;
	double pi = 3.14;
	float sq;

	scanf("%d", &radius);

	sq = pi * radius * radius;

	printf("sq : %g\n", sq);

	return 0;
}