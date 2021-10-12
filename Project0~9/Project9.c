#include <stdio.h>

int main()
{
	char initial;

	scanf("%c", &initial);

	if (initial >= 'a' && initial <= 'z')//대소문자 구별
	{
		printf("소문자\n");
	}

	else
	{
		printf("대문자\n");
	}

	return 0;
}