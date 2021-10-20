#include <stdio.h>

int main()
{
	int num[4] = { 1,2,3,4 };
	int* pt = num;

	pt++;
	*pt++ = 5;
	*pt++ = 10;
	pt--;
	*pt++ += 20;

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", num[i]);// restult : {1, 5, 30, 4}
	}

	printf("\n");

	return 0;
}