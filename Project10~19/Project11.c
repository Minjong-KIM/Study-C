#include <stdio.h>

int main()//switch
{
	char command;

	printf("Ŀ�ǵ� �Է� : ");
	scanf("%c", &command);

	switch (command)
	{
	case 'i': printf("������â ����\n"); break;
	case 'm': printf("������ ����\n"); break;
	default: printf("������ ����� �����ϴ�.\n");
	}

	return 0;
}