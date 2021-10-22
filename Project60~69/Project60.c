#include <stdio.h>
#include <string.h>

int main()
{
	char buf[25];

	strcpy(buf, "hello world");//Original -> (char*)strcpy(char* dest, const char* origin)
	printf("%s\n", buf);
	strncpy(buf, "bye~~ world", 5);//Original -> (char*)strncpy(char* dest, const char* origin, size_t num)
	printf("%s\n", buf);

	return 0;
}