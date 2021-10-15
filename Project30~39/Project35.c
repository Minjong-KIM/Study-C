#include <stdio.h>

int add_number(int num1, int num2)
{
	return num1 + num2;
}

int subtract_number(int num1, int num2)
{
	return num1 - num2;
}

int multiply_number(int num1, int num2)
{
	return num1 * num2;
}

float devide_number(int num1, int num2)
{
	return (float)num1 / num2;
}

int main()
{
	int a = 3, b = 9;

	printf("add : %d\n", add_number(a, b));
	printf("subtract : %d\n", subtract_number(a, b));
	printf("multiply : %d\n", multiply_number(a, b));
	printf("devide : %g\n", devide_number(a, b));

	return 0;
}