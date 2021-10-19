#include <stdio.h>

void main()
{
	char str[] = "programing";
	char* ptr1, * ptr2;

	ptr1 = &str[0];
	ptr2 = &str[7];

	printf("Difference from two pointers : %d\n", ptr2 - ptr1);

	printf("%p\n", ptr1 + 1);
	printf("%c\n", *(ptr1 + 1));

	printf("%p\n", ptr1 + 3);
	printf("%c\n", *(ptr1 + 3));
}