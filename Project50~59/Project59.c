#include <stdio.h>
#include <string.h>

int main()
{
	const char* str1 = "LPUX";
	const char* str2 = "HINUX";
	const char* str3 = "SOLARIS";

	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, strcmp(str3, str1));

	//Original -> (int)strcmp(const char* str1, const char* str2)
	//str1 > str2 -> return 1;
	//str1 < str2 -> return -1;
	//str1 == str2 -> return 0;

	return 0;
}