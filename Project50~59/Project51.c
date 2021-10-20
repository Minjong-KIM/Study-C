#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "memmove can be very useful......";
	memmove(str + 20, str + 15, 11);//Original -> memmove(void *destination, const void *source, size_t)

	puts(str);

	return 0;
}