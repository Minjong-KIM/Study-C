#include <stdio.h>

void main()
{
	FILE* readfp, *writefp;
	char buff[1024];

	readfp = fopen("myfile.txt", "r");
	writefp = fopen("outfile.txt", "w");

	if (readfp == NULL)
	{
		printf("NOT FOUND\n");
		return;
	}

	while (!feof(readfp))
	{
		fgets(buff, 1024, readfp);
		fputs(buff, writefp);
	}

	fclose(readfp);
	fclose(writefp);
}