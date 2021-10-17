#include <stdio.h>

int main()
{
	int arr[10];
	int number;

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	while (1)
	{
		printf("number : ");
		scanf("%d", &number);

		for (int i = 0; i < 10; i++)
		{
			if (number == arr[i])
			{
				printf("exit\n");
				return 0;
			}

			else
			{
				continue;
			}
		}
	}
}