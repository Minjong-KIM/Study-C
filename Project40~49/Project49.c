#include <stdio.h>

int main()
{
	int arr[5] = { 2,4,6,8,10 };
	int* p = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *p++);
	}

	return 0;
}