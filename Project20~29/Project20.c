#include <stdio.h>

int main()
{
	char alphabet = 'A';

	while (1)//'A'���� 'Z'���� ���ĺ��� 'F'�����ϰ� ���
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