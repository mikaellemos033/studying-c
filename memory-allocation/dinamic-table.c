#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) 
{
	char *s;
	register int t;

	s = malloc(80);

	if (!s) {
		printf("Falha na soliciatacao de memoria\n");
		return 1;
	}

	gets(s);

	for (t=strlen(s) - 1; t >= 0; t--) putchar(s[t]);
	free(s);

	return 0;
}