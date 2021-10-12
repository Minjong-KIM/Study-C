#include <stdio.h>

int main()
{
	char command;

	printf("<, a 왼쪽 이동\n");
	printf(">, d 오른쪽 이동\n");

	scanf("%c", &command);

	switch (command)
	{
	case '<': case 'a':
		printf("왼쪽으로 이동합니다.\n");
		break;
	case '>': case 'd':
		printf("오른쪽으로 이동합니다.\n");
		break;
	}

	return 0;
}