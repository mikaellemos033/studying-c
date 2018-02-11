/**
 * numa união só é permitodo um valor,
 * com base nos tipos especificados
 */

#include <stdio.h>

union formunion {
	int i;
	char ch[2];
};

union formunion un;

int main(void) {
	
	un.i = 10;
	gets(un.ch);

	printf("%s\n", un.ch);
	printf("%d\n", un.i);
	
	return 0;
}