#include <stdio.h>

int main()
{
	int number;

	scanf("%d", &number);

	if (number % 3 == 0)
	{
		printf("number�� 3�� ����Դϴ�.\n");

		if (number % 6 == 0)
		{
			printf("number�� 6�� ����Դϴ�.\n");
		}

		if (number % 9 == 0)
		{
			printf("number�� 9�� ����Դϴ�.\n");
		}
	}

	else if (number % 6 == 0)
	{
		printf("number�� 6�� ����Դϴ�.\n");

		if (number % 9 == 0)
		{
			printf("number�� 9�� ����Դϴ�.\n");
		}
	}

	else if (number % 9 == 0)
	{
		printf("number�� 9�� ����Դϴ�.\n");
	}

	else
	{
		printf("3,6,9�� ����� �ƴմϴ�.\n");
	}

	return 0;
}