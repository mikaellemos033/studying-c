#include <stdio.h>

void swrap(int *a, int *b);

int main(void) {

	int j, k;

	j = 10;
	k = 200;

	swrap(&j, &k);
	printf("jota -> %d\nka -> %d\n", j, k);
	return 0;
}

void swrap(int *a, int *b) {

	int temp = *b;

	*b = *a;
	*a = temp;
}