#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "string.h"

void check(char *a, char *b, int (*cmp)(const char *, const char*));
int numcmp (const char *a, const char *b);


int main(void) 
{
	char s1[80], s2 [80];

	gets(s1);
	gets(s2);

	if (isalpha(*s1) && isalpha(*s2)) {
		check(s1, s2, strcmp);
		return 0;
	}

	check(s1, s2, numcmp);
}



void check(char *a, char *b, int (*cmp) (const char *, const char *)) {

	if (!(*cmp)(a, b)) {
		printf ("Iguais \n");
	} else {
		printf("diferentes\n");
	}

}


int numcmp(const char *a, const char *b) {

	if (atoi(a) == atoi(b)) return 0;
	return 1;

}