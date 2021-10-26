#include <stdio.h>

char* my_strchr(const char* str, int ascii)
{
	while (*str++)
	{
		if (*str == (char)ascii)
		{
			return str;
		}
	}

	return NULL;
}

int main()
{
	char str[] = "This is a sample string";
	char* pch;

	printf("Looking for the 's' character in \"%s\"...\n", str);

	pch = my_strchr(str, 's');

	while (pch != NULL)
	{
		printf("found at %d\n", pch - str + 1);
		pch = my_strchr(pch + 1, 's');
	}

	return 0;
}