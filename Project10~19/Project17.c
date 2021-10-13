#include <stdio.h>

int main()
{
	int num = 0;

	while (num <= 100)
	{
		if (num % 5 == 0)
		{
			printf("%d\n", num);
		}

		num++;
	}

	return 0;
}