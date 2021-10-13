#include <stdio.h>

int main()
{
	int select;
	
	do
	{
		printf("1. 로그인\n2. 회원가입\n3. 옵션\n4. 만든 사람들\n");
		scanf("%d", &select);
	} while (select >= 1 && select <= 4);//1 ~ 4 범위가 아닌 경우 반복문을 나간다.

	return 0;
}