#include <stdio.h>

char* my_strncpy(char* dest, const char* origin, int num)
{
	while (num--)
	{
		*dest++ = *origin++;
	}

	*dest = NULL;

	return dest;
}

int main()
{
	char buf[25];

	my_strncpy(buf, "hello world", 5);
	printf("%s\n", buf);
}