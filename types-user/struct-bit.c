#include <stdio.h>

struct bit_type {
	unsigned status1;
	unsigned status2;
	unsigned status3;
	unsigned status4;
	unsigned status5;
	unsigned status6;
	unsigned status7;
};

struct bit_type bits;

int main(void) {

	bits.status6 = 1;
	bits.status7 = 0;


	if (bits.status7) printf("%d\n", bits.status7);	
	if (bits.status6) printf("Ok Validacao passou\n");
	
	printf("%lo\n", sizeof(bits.status6));

	return 0;
}