#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct number
{
	int Num;
};

void func_sort(struct number* pNum, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (pNum[i].Num > pNum[j].Num)
			{
				int tmp = pNum[j].Num;
				pNum[j].Num = pNum[i].Num;
				pNum[i].Num = tmp;
			}
		}
	}
}

void main()
{
	int n;


	struct number* num;

	scanf("%d", &n);

	num = (struct number*)malloc(sizeof(struct number) * n);

	srand((unsigned int)time(NULL));

	printf("<random number>\n");
	for (int i = 0; i < n; i++)
	{
		num[i].Num = (rand() % n) + 1;
		printf("%2d ", num[i].Num);
	}

	func_sort(num, n);

	printf("\n<sort random number>\n");
	for (int i = 0; i < n; i++)
	{
		printf("%2d ", num[i].Num);
	}

	free(num);
}