#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 4 - i; k++)
		{
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}