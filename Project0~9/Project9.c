#include <stdio.h>

int main()
{
	char initial;

	scanf("%c", &initial);

	if (initial >= 'a' && initial <= 'z')//��ҹ��� ����
	{
		printf("�ҹ���\n");
	}

	else
	{
		printf("�빮��\n");
	}

	return 0;
}