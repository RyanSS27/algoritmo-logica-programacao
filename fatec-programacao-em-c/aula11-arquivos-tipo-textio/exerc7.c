#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	char ult[] = "teste2.txt", ch;
	int num = 0;
	FILE *arq;
	
	arq = fopen(ult, "r");
	
	if (arq == NULL) {
	
		printf("Erro, não foi possivel abrir o arquivo");
	}else {
	
		while ((ch=fgetc(arq))!= EOF)
			if(ch =="\n")
				num++;
	}
	printf("Existem %d linhas no arquivo\n", num);
	fclose(arq);
	return 0; 
}