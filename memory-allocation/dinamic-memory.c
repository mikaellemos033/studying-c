#include <stdio.h>
#include <stdlib.h>

int main (void) 
{

	char *p;

	if (!(p = malloc(2000))) {

		printf("Memoria nao alocada\n");
		return 0;

	}

	free(p);
	printf("Memoria alocada\n");
}