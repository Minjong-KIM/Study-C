#include <stdio.h>

int main()
{
	char oper;
	int num1, num2;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &num1, &oper, &num2);

	switch (oper)
	{
	case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
	case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
	case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2); break;
	case '/': printf("%d / %d = %d\n", num1, num2, num1 + num2); break;
	case '%': printf("%d %% %d = %d\n", num1, num2, num1 % num2); break;
	default: printf("연산자를 잘못 입력했습니다.\n");
	}

	return 0;
}