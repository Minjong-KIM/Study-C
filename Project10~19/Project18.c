#include <stdio.h>

int main()
{
	int count = 3;

	while (count)
	{
		printf("현재 count : %d\n", count);
		printf("count가 0이 아니면 반복\n");
		
		if (count == 1)
		{
			break;//반복문 탈출
		}

		count--;
	}

	return 0;
}