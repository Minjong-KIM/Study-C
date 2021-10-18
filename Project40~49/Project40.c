#include <stdio.h>

int main()
{
	int arr2d[3][3] = {
		{2,4,6},
		{8,10,12},
		{14,16,18}
	};

	for (int i = 0; i < 3; i++)//swap rows and columns
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%3d ", arr2d[k][i]);
		}

		printf("\n");
	}

	return 0;
}