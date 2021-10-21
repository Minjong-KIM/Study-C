#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "This is a simple string";
	char* pch;

	pch = strstr(str, "simple");// Original -> (char*) strstr(char* const_string, string)
	strncpy(pch, "sample", 6);

	printf("%s\n", str);

	return 0;
}