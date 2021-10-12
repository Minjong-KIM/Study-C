#include <stdio.h>

int main()
{
	int apple = 0;

	if (apple == 10)
	{
		printf("apple은 10개 있습니다.\n");
	}

	else if (apple == 0)//apple이 0이면 실행
	{
		printf("apple은 하나도 없습니다.\n");
	}

	apple = 15;

	if (!apple)
	{
		printf("apple은 하나도 없습니다.\n");
	}

	else//if가 틀리면(appledl 0이 아니면) 실행
	{
		printf("apple은 0개가 아닙니다.\n");
	}

	return 0;
}