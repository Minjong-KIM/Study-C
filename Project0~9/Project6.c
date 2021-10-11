#include <stdio.h>

int main()
{
	int bott_len;
	int top_len;
	int high;
	float sq;

	printf("bottom length : ");
	scanf("%d", &bott_len);

	printf("top length : ");
	scanf("%d", &top_len);

	printf("high : ");
	scanf("%d", &high);

	sq = (float)((bott_len + top_len) * high) / 2;

	printf("sq : %g\n", sq);

	return 0;
}