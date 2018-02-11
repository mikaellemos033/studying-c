#include <stdio.h>

enum coin {dollar, bitcoin, real, euro, peso_argentino};

int main(void) {
	enum coin real;
	real = 0;

	printf("%d\n", real);
	return 0;
}