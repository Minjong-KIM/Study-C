#include <stdio.h>

int main()
{
	char command;

	printf("<, a ���� �̵�\n");
	printf(">, d ������ �̵�\n");

	scanf("%c", &command);

	switch (command)
	{
	case '<': case 'a':
		printf("�������� �̵��մϴ�.\n");
		break;
	case '>': case 'd':
		printf("���������� �̵��մϴ�.\n");
		break;
	}

	return 0;
}