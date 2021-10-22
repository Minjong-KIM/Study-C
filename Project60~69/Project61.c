#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parsing(char* String, int* data)
{
	char* p;
	int cnt;

	cnt = 0;

	p = strtok(String, "_");//Original -> (char*)strtok(char* str, char* delimiters)
	while (p)
	{
		data[cnt++] = atoi(p);
		p = strtok(NULL, "_");
	}

	return cnt;
}

int main()
{
	char String[] = "101_102_103_104_105";
	int data[10];
	int cnt, i;

	cnt = parsing(String, data);

	for (i = 0; i < cnt; i++)
	{
		printf("%d\n", data[i]);
	}

	return 0;
}