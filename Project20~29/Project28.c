#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 4 - i; k++)
		{
			printf(" ");
		}

		for (int j = 0; j < i + 1; j++)
		{
			printf("%d", i + 1);
		}

		printf("\n");
	}
}