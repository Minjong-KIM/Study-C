#include <stdio.h>

int main()//switch
{
	char command;

	printf("커맨드 입력 : ");
	scanf("%c", &command);

	switch (command)
	{
	case 'i': printf("아이템창 오픈\n"); break;
	case 'm': printf("지도맵 오픈\n"); break;
	default: printf("지정된 기능이 없습니다.\n");
	}

	return 0;
}