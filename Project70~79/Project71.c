#include <stdio.h>

char* my_strtok(char* str, const char* delim)
{
	static char* pstr;
	char* pDelim;

	if (str != NULL)
	{
		pstr = str;
	}

	else
	{
		str = pstr;
	}

	if (*pstr == NULL)
	{
		return NULL;
	}

	while (*pstr)
	{
		pDelim = (char*)delim;

		while (*pDelim)
		{
			if (*pstr == *pDelim)
			{
				*pstr = NULL;
				pstr++;

				return str;
			}

			pDelim++;
		}

		pstr++;
	}

	return str;
}

int main()
{
	char str[] = "101_102=103+104-105";
	char* p;

	p = my_strtok(str, "_=+-");

	while (p)
	{
		printf("%s\n", p);
		p = my_strtok(NULL, "_=+-");
	}

	return 0;
}