#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[]) 
{
	int disp, count;

	if (argc < 2) {

		printf("Informe um numero apos o nome do programa\n");
		return 1;
	}

	disp = (argc == 3 && !strcmp(argv[2], "display")) ? 1 : 0;

	for (count = atoi(argv[1]); count; --count)
		if (disp) printf("%d\n", count);

	printf("terminou \n");
	return 0;
}