#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	FILE *f= fopen("teste.txt", "w");
	int i;
	for (i=1; i<=10;i++) {
		fprintf(f, "%d\n", i);
		
	}
	fclose(f);
}