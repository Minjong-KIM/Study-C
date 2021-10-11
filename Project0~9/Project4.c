#include <stdio.h>

int main()
{
	int bottom_length = 3;
	int top_length = 5;
	int high = 7;
	float sq;

	sq = (bottom_length + top_length) * high / 2;

	printf("sq : %g\n", sq);

	return 0;
}