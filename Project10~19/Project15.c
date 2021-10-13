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
		case 1: printf("주문한 음식은 appetizer의 caviar\n"); break;
		case 2: printf("주문한 음식은 appetizer의 salad\n"); break;
		case 3: printf("주문한 음식은 appetizer의 foie gras\n"); break;
		default: printf("잘못 고르셨습니다.\n");
		}

		break;

	case 2: 
		printf("1 : steak, 2 : fish dish, 3 : lamb ribs\n");
		scanf("%d", &select);

		switch (select)
		{
		case 1: printf("주문한 음식은 mainDish의 steak\n"); break;
		case 2: printf("주문한 음식은 mainDish의 fish dish\n"); break;
		case 3: printf("주문한 음식은 mainDish의 lamb ribs\n"); break;
		default: printf("잘못 고르셨습니다.\n");
		}

		break;

	case 3: 
		printf("1 : cake, 2 : ice cream, 3 : chocolate\n");
		scanf("%d", &select);

		switch (select)
		{
		case 1: printf("주문한 음식은 dessert의 cake\n"); break;
		case 2: printf("주문한 음식은 dessert의 ice cream\n"); break;
		case 3: printf("주문한 음식은 dessert의 chocolate\n"); break;
		default: printf("잘못 고르셨습니다.\n");
		}

		break;

	default:
		printf("잘못 고르셨습니다.\n");
	}

	return 0;
}