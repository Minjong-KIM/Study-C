#include <stdio.h>
#include <string.h>

int main()
{
	char* ptr1 = (char*)"coding";
	char* ptr2 = (char*)"coding";
	char* ptr3 = (char*)"coding.ne.kr";
	char* ptr4 = (char*)"ne.kr";
	char* ptr5 = (char*)"abcd";

	printf("%s with %s = %d\n", ptr1, ptr2, memcmp(ptr1, ptr2, strlen(ptr1)));
	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr1)));
	printf("%s with %s (ptr3 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr3)));
	printf("%s with %s = %d\n", ptr1, ptr4, memcmp(ptr1, ptr4, strlen(ptr1)));
	printf("%s with %s (prt1 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr1)));
	printf("%s with %s (ptr5 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr5)));
	
	// Original -> memcmp(const void* ptr1, const void* ptr2, size_t)
	//same -> '0' return
	//ptr1 > ptr2 -> '1' return
	//ptr1 < ptr2 -> '-1' return
	
	return 0;
}