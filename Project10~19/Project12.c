#include <stdio.h>

int main()
{
	char oper;
	int num1, num2;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &num1, &oper, &num2);

	switch (oper)
	{
	case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
	case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
	case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2); break;
	case '/': printf("%d / %d = %d\n", num1, num2, num1 + num2); break;
	case '%': printf("%d %% %d = %d\n", num1, num2, num1 % num2); break;
	default: printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}

	return 0;
}