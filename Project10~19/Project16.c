#include <stdio.h>

int main()
{
	int count = 0;

	while (count < 3)
	{
		printf("현재 count : %d\n", count);
		printf("count가 3보다 작은동안 반복\n");
		count++;
	}

	return 0;
}