#include <stdio.h>
#include <stdbool.h>

struct GUN
{
	char name[10];
	float bullet_type;
	bool scope;//true/false, 1bit size data type
	bool muzzle;
	bool handgrip;
	bool magazine;
	bool tactical_stock;
	int magazine_size;
};

int main()
{
	struct GUN M416 = { "M416", 5.56, true, true, true, true, true,30 };

	printf("Gun name : %s\n", M416.name);
	printf("bullet type : %.2lf\n", M416.bullet_type);
	printf("scope : %s", M416.scope ? "true" : "false");

	return 0;
}