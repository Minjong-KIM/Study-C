#include <stdio.h>

char* myStrstr(const char* str1, const char* str2)
{
	int i = 0;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	while (*str1++)
	{
		while (*(str1 + i) == *(str2 + i))
		{
			i++;

			if (*(str2 + i) == '\0')
			{
				return (char*)str1;
			}
		}
	}

	return NULL;
}

int main()
{
	char str[] = "This is a simple string";
	char* pch;

	pch = myStrstr(str, "simple");

	printf("%s\n", pch);

	return 0;
}