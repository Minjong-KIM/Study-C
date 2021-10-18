#include <stdio.h>//snail array

int main()
{
	int snail[20][20];
	int size;
	int sign = 1;
	int i, k, j;
	int x = 0, y = 0;
	int cnt = 1;

	printf("size (max = 20) : ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		snail[y][x] = cnt++;
		x += sign;
	}

	x -= 1;

	for (i = size - 1; i > 0; i--)
	{
		for (k = 0; k < i; k++)
		{
			y += sign;
			snail[y][x] = cnt++;
		}

		sign *= -1;

		for (j = 0; j < i; j++)
		{
			x += sign;
			snail[y][x] = cnt++;
		}
	}

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			printf("%3d ", snail[i][k]);
		}

		printf("\n\n");
	}

	return 0;
}