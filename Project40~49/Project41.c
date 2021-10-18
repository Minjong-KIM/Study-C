#include <stdio.h>

int main()
{
	int num;//under 10
	int arr[10];

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", arr + i);
	}

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < arr[i]; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}