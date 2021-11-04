#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 10

int queue[MAXSIZE];
int front, rear;
int value;

void init_queue(void)
{
	front = rear = 0;
	printf("QUEUE SIZE is %d\n", MAXSIZE);
}

int put(void)
{
	if ((rear + 1) % MAXSIZE == front)
	{
		printf("	QUEUE Overflow\n");

		return -1;
	}

	printf("value : ");
	scanf("%d", &value);

	queue[rear] = value;
	rear = ++rear % MAXSIZE;

	return value;
}

int get(void)
{
	int i;
	
	if (front == rear)
	{
		printf("	QUEUE Underflow\n");

		return -1;
	}

	i = queue[front];
	front = ++front % MAXSIZE;

	printf("out value : %d\n", i);

	return i;
}

void print_queue(void)
{
	printf("QUEUE from front to rear\n");
	for (int i = front; i != rear; i = ++i % MAXSIZE)
	{
		printf("%-6d", queue[i]);
	}

	printf("\n");
}

int main()
{
	int choice;
	bool while_flag = true;

	init_queue();
	
	while (while_flag)
	{
		printf("[QUEUE]\n1. put\n2. get\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			put(); break;

		case 2:
			get(); break;

		default:
			while_flag = false;
			break;
		}

		print_queue();
	}

	return 0;
}