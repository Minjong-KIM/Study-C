#include <stdio.h>

int main()
{
	char alphabet = 'A';

	while (1)//'A'부터 'Z'까지 알파벳을 'F'제외하고 출력
	{
		if (alphabet == 'F')
		{
			alphabet++;
			continue;
		}
		
		printf("%c\n", alphabet);

		if (alphabet == 'Z')
		{
			break;
		}

		alphabet++;
	}

	return 0;
}