#include <stdio.h>

int main()
{
	int arr[4];
	int tmp;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", arr + i);
	}

	for (int i = 0; i < 4; i++)//Bubble sort
	{
		for (int k = 0; k < 3; k++)
		{
			if (arr[k] > arr[k + 1])//Ascending
			{
				tmp = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = tmp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}