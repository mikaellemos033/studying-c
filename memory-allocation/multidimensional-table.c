#include <stdio.h>
#include <stdlib.h>

int pwr(int a, int b);
void table(int p[5][10]);
void show(int p[5][10]);

int main(void) {

	int *p;

	p = malloc(sizeof(int) * 50);

	if (!p) {

		printf("Falha na solicitacao de memoria\n");
		exit(1);

	}

	table(p);
	show(p);

	return 0;
}


void table (int p[5][10]) {

	register int i, j;

	for (j=1; j < 11; j++)
		for (i=1; i < 6; i++) p[i-1][j-1] = pwr(j, i);
}


void show(int p[5][10]) {

	register int i, j;

	printf("%10s %10s %10s %10s %10s\n", "N", "Nˆ2",  "Nˆ3", "Nˆ4", "nˆ5");

	for (j=1; j < 11; j++) {

		printf("%10d %10d %10d %10d %10d \n", p[0][j-1], p[1][j-1], p[2][j-1], p[3][j-1], p[4][j-1]);		

	}

}

int pwr(int a, int b) {

	register int t = 1;
	for (; b; b--) t = t * a;

	return t;
}