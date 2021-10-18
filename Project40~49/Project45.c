#include <stdio.h>

void main()
{
	char a = 'A';
	char* pA = &a;

	int b = 100;
	int* pB = &b;

	double c = 3.14;
	double* pC = &c;

	printf("size of pA : %d byte\n", sizeof(pA));
	printf("size of pB : %d byte\n", sizeof(pB));
	printf("size of pC : %d byte\n", sizeof(pC));

	printf("size of *pA : %d byte\n", sizeof(*pA));
	printf("size of *pB : %d byte\n", sizeof(*pB));
	printf("size of *pC : %d byte\n", sizeof(*pC));
}