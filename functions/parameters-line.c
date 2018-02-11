#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	if (argc > 1) {	

		register int i = 1;
		
		for (; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
	}

	return 0;
}