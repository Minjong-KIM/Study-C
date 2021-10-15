#include <stdio.h>

int function_test2()
{
	int testNumber = 5;
	
	return testNumber;
}

int main()
{
	int getNumber;

	getNumber = function_test2();

	printf("value in function_test2() : %d\n", getNumber);

	return 0;
}