#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "coding";

	strcat(str, ".ne.kr");//Original -> strcat(char* dest, const char* origin), "concatenate"
	printf("%s\n", str);// "coding.ne.kr"

	return 0;
}