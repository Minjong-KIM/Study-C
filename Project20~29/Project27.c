#include <stdio.h>

int main()
{
	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
		{
			for (int k = 0; k < 2 - i; k++)
			{
				printf(" ");
			}

			for (int j = 0; j < i * 2 + 1; j++)
			{
				printf("*");
			}

			printf("\n");
		}

		else
		{
			for (int k = 0; k < i - 3; k++)
			{
				printf(" ");
			}

			for (int j = 0; j < (6 - i) * 2 - 1; j++)
			{
				printf("*");
			}

			printf("\n");
		}
	}

	
}