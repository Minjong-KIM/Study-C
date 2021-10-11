#include <stdio.h>

int main()
{
	int apple = 15;

	if (apple)
	{
		printf("apple은 0개가 아닙니다.\n");
	}

	apple = 0;

	if (!apple)//apple이 0이면 실행
	{
		printf("apple은 하나도 없습니다.\n");
	}

	return 0;
}