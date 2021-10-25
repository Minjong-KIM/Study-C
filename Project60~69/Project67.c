#include <stdio.h>

int my_strncmp(const char* str1, const char* str2, int num)
{
	while (num--)
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
	const char* str2 = "LPUXg";

	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str1, str2, 5));

	return 0;
}