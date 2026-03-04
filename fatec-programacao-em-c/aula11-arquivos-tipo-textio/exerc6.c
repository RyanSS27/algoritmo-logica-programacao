#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	FILE *f = fopen("teste.txt", "r");
	int i;
	while(fscanf(f, "%d", &i)== 1) {
		printf("%d\n", i);
	}
	
	fclose(f);
}