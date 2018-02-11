#include <stdio.h>

typedef struct {
	int l;
} ghost;

int main(void) {

	ghost list;
	list.l = 10;

	printf("%d\n", list.l);

	return 0;
}