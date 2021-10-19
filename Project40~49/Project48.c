#include <stdio.h>

int main()
{
	int arr[5];
	int* ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", ptr + i);
		printf("%d ", *(ptr + i));
	}

	return 0;
}