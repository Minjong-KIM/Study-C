#include <stdio.h>

char* my_strcpy(char* dest, const char* origin)
{
	while (*origin)
	{
		*(dest++) = *(origin++);
	}

	*dest = '\0';

	return dest;
}

int main()
{
	char buf[25];
	
	my_strcpy(buf, "hello world");
	printf("%s\n", buf);

	return 0;
}