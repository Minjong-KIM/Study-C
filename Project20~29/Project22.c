#include <stdio.h>

int main()
{
	int sheep;

	for (sheep = 1; sheep < 50; sheep++)
	{
		if (sheep % 10 == 0)
		{
			printf("±ôºý Á¹¾Ò´Ù\n");
			continue;
		}
		
		if (sheep == 45)
		{
			printf("Àáµé¾ú´Ù~\n");
			break;
		}

		printf("¾ç %d¸¶¸®\n", sheep);
	}

	return 0;
}