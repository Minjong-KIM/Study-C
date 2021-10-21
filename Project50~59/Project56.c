#include <stdio.h>
#include <string.h>

int main()
{
	char str[10];

	scanf("%s", str);

	printf("string : %s\n", str);
	printf("length : %d\n", strlen(str));//Original -> (size_t) strlen(const char* str)

	return 0;
}