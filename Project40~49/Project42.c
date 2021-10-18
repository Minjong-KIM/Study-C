#include <stdio.h>

int main()
{
	int num;//under 10
	int arr[10];
	char star[10][10] = { " " };//' ' initialize

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", arr + i);
	}

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < arr[i]; k++)
		{
			star[i][k] = '*';
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			printf("%c", star[k][i]);
		}

		printf("\n");
	}

	return 0;
}