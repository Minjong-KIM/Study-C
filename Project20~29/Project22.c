#include <stdio.h>

int main()
{
	int sheep;

	for (sheep = 1; sheep < 50; sheep++)
	{
		if (sheep % 10 == 0)
		{
			printf("���� ���Ҵ�\n");
			continue;
		}
		
		if (sheep == 45)
		{
			printf("������~\n");
			break;
		}

		printf("�� %d����\n", sheep);
	}

	return 0;
}