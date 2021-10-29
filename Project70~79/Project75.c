#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func_sort(int* pNum, int N);

void main()
{
	int* pNum;
	int N;

	scanf("%d", &N);

	pNum = (int*)malloc(sizeof(int) * N);

	srand((unsigned int)time(NULL));

	printf("<random number>\n");
	for (int i = 0; i < N; i++)
	{
		pNum[i] = (rand() % N) + 1;
		printf("%2d ", pNum[i]);
	}

	func_sort(pNum, N);

	printf("\n<after sort ascending>\n");
	for (int i = 0; i < N; i++)
	{
		printf("%2d ", pNum[i]);
	}

	free(pNum);
}

void func_sort(int* pNum, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (pNum[i] > pNum[j])
			{
				int tmp = pNum[i];
				pNum[i] = pNum[j];
				pNum[j] = tmp;
			}
		}
	}
}