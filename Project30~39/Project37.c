#include <stdio.h>

struct __dummy__
{
	int data_0;//4byte
	char data_1;//1byte
	float data_2;//4byte
} dummy;

struct VIP_PERSON
{
	char grade;//1byte
	int personCode;//4byte
	char mileage;//1byte
} vip;

int main()
{
	int sizedummy = sizeof(dummy);//12byte
	int sizevip = sizeof(vip);//12byte

	printf("size of dummy : %d\n", sizedummy);
	printf("size of vip information : %d\n", sizevip);

	return 0;
}// It is determined based on the largest data type among variables declared in the struct