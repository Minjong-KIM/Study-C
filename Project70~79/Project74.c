#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j;
	int nRow = 5, nCol = 4;
	int** aNum;

	aNum = (int**)malloc(sizeof(int*) * nRow);
	for (i = 0; i < nRow; i++)
	{
		aNum[i] = (int*)malloc(sizeof(int) * nCol);

		for (j = 0; j < nCol; j++)
		{
			aNum[i][j] = i * 10 + j;
		}
	}

	for (i = 0; i < nRow; i++)
	{
		for (j = 0; j < nCol; j++)
		{
			printf("%02d ", aNum[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < nRow; i++)
	{
		free(aNum[i]);
	}

	free(aNum);
}