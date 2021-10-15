#include <stdio.h>

void makeHamburg(int count)
{
	printf("Got %d hamburger\n", count);
}

int main()
{
	int ham_count;

	printf("how many would you like to order?\n");
	scanf("%d", &ham_count);

	makeHamburg(ham_count);

	return 0;
}