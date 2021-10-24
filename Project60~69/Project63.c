#include <stdio.h>

int my_strlen(char* String)
{
	int cnt = 0;

	while (*String)
	{
		cnt++;
		String++;
	}

	return cnt;
}

int main()
{
	char str[] = "String Length";

	printf("%d\n", my_strlen(str));

	return 0;
}