#include <stdio.h>

int main()
{
	int number;

	scanf("%d", &number);

	if (number % 3 == 0)
	{
		printf("number는 3의 배수입니다.\n");

		if (number % 6 == 0)
		{
			printf("number는 6의 배수입니다.\n");
		}

		if (number % 9 == 0)
		{
			printf("number는 9의 배수입니다.\n");
		}
	}

	else if (number % 6 == 0)
	{
		printf("number는 6의 배수입니다.\n");

		if (number % 9 == 0)
		{
			printf("number는 9의 배수입니다.\n");
		}
	}

	else if (number % 9 == 0)
	{
		printf("number는 9의 배수입니다.\n");
	}

	else
	{
		printf("3,6,9의 배수가 아닙니다.\n");
	}

	return 0;
}