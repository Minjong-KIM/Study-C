#include <stdio.h>

int main()
{
	int select;
	
	do
	{
		printf("1. �α���\n2. ȸ������\n3. �ɼ�\n4. ���� �����\n");
		scanf("%d", &select);
	} while (select >= 1 && select <= 4);//1 ~ 4 ������ �ƴ� ��� �ݺ����� ������.

	return 0;
}