#include <stdio.h>

int main()
{
	char input;

	for (;;)
	{
		scanf("%c", &input);


		switch (input)
		{
		case 's':
			printf("Start Game\n");
			break;
		case 'e':
			printf("Exit Game\n");
			return 0;
		}
	}

	return 0;
}