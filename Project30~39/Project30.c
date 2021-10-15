#include <stdio.h>

void function_test1()
{
	printf("function_test()");
	printf("함수안에서 실행\n");
}

int main()
{
	printf("실행전\n");
	function_test1();
	printf("실행후\n");

	return 0;
}