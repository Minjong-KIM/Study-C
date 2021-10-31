#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 30

int main()
{
	char buff[BUFF_SIZE];
	int readLen = 0;
	FILE* src, * dst;
	char name1[100], enter;
	char name2[100];

	printf("get input file name : ");
	scanf("%s%c", name1, &enter);

	printf("get ouput file name : ");
	gets(name2);

	src = fopen(name1, "rb");
	dst = fopen(name2, "wb");

	if (src == NULL || dst == NULL)
	{
		puts("NOT FOUND");
		return -1;
	}

	while (1)
	{
		readLen = fread(buff, 1, BUFF_SIZE, src);

		if (readLen < BUFF_SIZE)
		{
			if (feof(src) != 0)
			{
				fwrite(buff, 1, readLen, dst);
				puts("Complete file copy\n");
				break;
			}

			else
			{
				printf("Fail file copy\n");
			}
		}

		fwrite(buff, 1, BUFF_SIZE, dst);
	}

	if (fclose(src) != 0 || fclose(dst) != 0)
	{
		puts("Failed to close file.");
		return -1;
	}

	return 0;
}