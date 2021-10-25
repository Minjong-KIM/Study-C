#include <stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 != '\0' || *str2 != '\0')
	{
		if (*str1 > *str2)
			return 1;

		if (*str1 < *str2)
			return -1;

		str1++;
		str2++;
	}

	return 0;
}

int main()
{
	const char* str1 = "LPUX";
	const char* str2 = "HINUX";
	const char* str3 = "SOLARIS";

	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, my_strcmp(str1, str2));
	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, my_strcmp(str2, str3));
	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, my_strcmp(str3, str1));

	return 0;
}