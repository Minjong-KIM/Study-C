#include <stdio.h>
#include <string.h>

int main()
{
	int src_data[10] = { 0,1,2,3,4,5 };
	int dst_data[10] = { 10,20,30,40,50 };
	memcpy(dst_data, src_data, sizeof(int) * 4);
	//Original -> memcpy(void* destination, const void* source, size_t)
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", src_data[i]);
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", dst_data[i]);
	}

	return 0;
}