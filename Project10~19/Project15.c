#include <stdio.h>

int main()
{
	int course;
	int select;
	
	printf("1 : appetizer, 2 : mainDish, 3 : dessert\n");
	scanf("%d", &course);

	switch (course)
	{
	case 1:
		printf("1 : caviar, 2 : salad, 3 : foie gras\n");
		scanf("%d", &select);

		switch (select)
		{
		case 1: printf("�ֹ��� ������ appetizer�� caviar\n"); break;
		case 2: printf("�ֹ��� ������ appetizer�� salad\n"); break;
		case 3: printf("�ֹ��� ������ appetizer�� foie gras\n"); break;
		default: printf("�߸� ���̽��ϴ�.\n");
		}

		break;

	case 2: 
		printf("1 : steak, 2 : fish dish, 3 : lamb ribs\n");
		scanf("%d", &select);

		switch (select)
		{
		case 1: printf("�ֹ��� ������ mainDish�� steak\n"); break;
		case 2: printf("�ֹ��� ������ mainDish�� fish dish\n"); break;
		case 3: printf("�ֹ��� ������ mainDish�� lamb ribs\n"); break;
		default: printf("�߸� ���̽��ϴ�.\n");
		}

		break;

	case 3: 
		printf("1 : cake, 2 : ice cream, 3 : chocolate\n");
		scanf("%d", &select);

		switch (select)
		{
		case 1: printf("�ֹ��� ������ dessert�� cake\n"); break;
		case 2: printf("�ֹ��� ������ dessert�� ice cream\n"); break;
		case 3: printf("�ֹ��� ������ dessert�� chocolate\n"); break;
		default: printf("�߸� ���̽��ϴ�.\n");
		}

		break;

	default:
		printf("�߸� ���̽��ϴ�.\n");
	}

	return 0;
}