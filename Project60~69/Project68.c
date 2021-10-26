#include <stdio.h>

char* my_strcat(char* dest, const char* origin)
{
	while (1)
	{
		dest++;

		if (*dest == '\0')
		{
			while (*origin != '\0')
			{
				*dest = *origin;

				dest++;
				origin++;
			}

			if (*origin == '\0')
			{
				*dest = *origin;
			}

			break;
		}
	}

	return dest;
}

int main()
{
	char str[20] = "coding";

	my_strcat(str, ".ne.kr");
	printf("%s\n", str);

	return 0;
}