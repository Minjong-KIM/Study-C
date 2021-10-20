#include <stdio.h>
#include <string.h>

struct mydata
{
	int a;
	char b[25];
};

int main()
{
	char buff[5];
	memset(buff, '1', 5);
	printf("%s\n", buff);

	buff[4] = 0x00;
	printf("%s\n", buff);

	struct mydata data;
	memset((void*)&data, 0x00, sizeof(data));//Original -> memset(void *ptr, int value, size_t)
	data.b[0] = 'k';
	printf("%d - %s\n", data.a, data.b);

	return 0;
}