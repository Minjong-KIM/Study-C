#include <stdio.h>

int main()
{
	int result = 1;
	int num = 1;

	while (1)// 1 * 2 * 3 * 4 ....�� ���� ó�� 50000�̻��� �� ���� num�� ���� ����϶�.
	{
		result *= num;

		if (result >= 50000)
		{
			break;
		}

		num++;
	}

	printf("%d\n", num);

	return 0;
}