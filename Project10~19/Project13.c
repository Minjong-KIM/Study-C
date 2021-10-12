#include <stdio.h>

int main()
{
	int month;

	scanf("%d", &month);

	switch (month)
	{
	case 1: printf("january\n"); break;
	case 2: printf("february\n"); break;
	case 3: printf("march\n"); break;
	case 4: printf("april\n"); break;
	case 5: printf("may\n"); break;
	case 6: printf("june\n"); break;
	case 7: printf("july\n"); break;
	case 8: printf("agust\n"); break;
	case 9: printf("september\n"); break;
	case 10: printf("october\n"); break;
	case 11: printf("november\n"); break;
	case 12: printf("december\n"); break;
	default: printf("잘못 입력했습니다.\n");
	}

	return 0;
}