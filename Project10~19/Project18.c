#include <stdio.h>

int main()
{
	int count = 3;

	while (count)
	{
		printf("���� count : %d\n", count);
		printf("count�� 0�� �ƴϸ� �ݺ�\n");
		
		if (count == 1)
		{
			break;//�ݺ��� Ż��
		}

		count--;
	}

	return 0;
}