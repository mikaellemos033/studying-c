#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{
	char *s;
	register int i;

	s = malloc(80);
	if (!s) {
		printf("Houve um pequeno problema\n");
		exit(1);
	}

	printf("Escreva algo com ate 79 caracteres\n");
	scanf("%s", s);

	for (i=strlen(s) - 1; i >= 0; i--) putchar(s[i]);
	
	free(s);	
	printf("\n");

	return 0;
}