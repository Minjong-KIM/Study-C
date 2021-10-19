#include <stdio.h>

int main()
{
	int numArr[5] = { 11,22,33,44,55 };
	int* numPtrA;
	void* ptr;

	numPtrA = &numArr[2];
	ptr = numArr;

	printf("%d\n", *(numPtrA - 1));//Using numPtrA, printf 22
	printf("%d\n", *((int*)ptr + 4));//Using ptr, printf 55

	return 0;
}