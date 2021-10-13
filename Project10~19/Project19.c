#include <stdio.h>

int main()
{
	int result = 1;
	int num = 1;

	while (1)// 1 * 2 * 3 * 4 ....의 값이 처음 50000이상이 된 때의 num의 값을 출력하라.
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