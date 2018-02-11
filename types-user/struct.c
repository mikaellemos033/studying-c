#include <stdio.h>

struct addr
{
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
};

int main(void) {

	struct addr addr_info;

	addr_info.zip  = 1234;
	gets(addr_info.name);

	printf("%s\n", addr_info.name);
	printf("%ld\n", addr_info.zip);

	return 0;
}
