#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main() {
	int c;
	FILE *pa;
	char *nome = "arquivo3.txt";
	
	/*Abre o arquivo para leitura*/
	if ((pa = fopen(nome, "r")) == NULL) {
		printf("\n\nNao foi possivel anrir o arquivo.\n");
		exit(1);
	}
	
	printf("\nimprimindo..");
	c = fgetc(pa);
	while(!feof(pa)) {
		putchar(c);
		c = fgetc(pa);
	}
	
	fclose(pa);
	getchar(); //espera que o usuario digite alguma coisa
	return 0;	
}