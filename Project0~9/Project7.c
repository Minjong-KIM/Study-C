#include <stdio.h>

int main()
{
	int apple = 15;

	if (apple)
	{
		printf("apple�� 0���� �ƴմϴ�.\n");
	}

	apple = 0;

	if (!apple)//apple�� 0�̸� ����
	{
		printf("apple�� �ϳ��� �����ϴ�.\n");
	}

	return 0;
}