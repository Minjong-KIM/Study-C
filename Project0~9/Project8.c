#include <stdio.h>

int main()
{
	int apple = 0;

	if (apple == 10)
	{
		printf("apple�� 10�� �ֽ��ϴ�.\n");
	}

	else if (apple == 0)//apple�� 0�̸� ����
	{
		printf("apple�� �ϳ��� �����ϴ�.\n");
	}

	apple = 15;

	if (!apple)
	{
		printf("apple�� �ϳ��� �����ϴ�.\n");
	}

	else//if�� Ʋ����(appledl 0�� �ƴϸ�) ����
	{
		printf("apple�� 0���� �ƴմϴ�.\n");
	}

	return 0;
}