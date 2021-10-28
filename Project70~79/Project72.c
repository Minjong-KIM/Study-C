#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int* iptr = (int*)malloc(sizeof(int));
	char* cptr = (char*)malloc(sizeof(char));
	double* dptr = (double*)malloc(sizeof(double));

	*iptr = 5;
	*cptr = 'a';
	*dptr = 3.5;

	printf("%d, %c, %lf", *iptr, *cptr, *dptr);
	
	free(iptr);
	free(cptr);
	free(dptr);
}