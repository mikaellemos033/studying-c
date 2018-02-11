#include <stdio.h>
#include <stdlib.h>

int volatile teste = 10;

void testeT(void);

int main (void) 
{	
	printf("before %d\n", teste);
	testeT();	
	printf("after %d\n", teste);

	return 0;
}

void testeT(void){
	teste = 70;
}