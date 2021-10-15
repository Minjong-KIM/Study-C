#include <stdio.h>

void sayHi();
char getA();
int get5();
double set1get5(int one);

void main()
{
	sayHi();
	printf("%c\n", getA());
	printf("%d\n", get5());
	printf("%f\n", set1get5(1));
}

void sayHi()
{
	printf("hi\n");
	return;
}

char getA()
{
	return 'A';
}

int get5()
{
	return 5;
}

double set1get5(int one)
{
	return one + 4.0;
}