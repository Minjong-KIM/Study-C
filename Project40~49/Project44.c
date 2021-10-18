#include <stdio.h>

void main()
{
	int b = 100;
	int* pB = &b;

	printf("b = %d\n", b);
	printf("b = %x\n", &b);
	printf("b = %d\n", *pB);
	printf("b = %x\n\n", pB);
}