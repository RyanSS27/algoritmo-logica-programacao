#include <stdio.h>
#define MAX 5

struct tipoEndereco{
	char rua[30];
	int num;
	int apartamento;
};

void main() {
	int i = 3;
	tipoEndereco endereco[i];
	
	FILE *arq;
	char nome[20];
	arq = fopen("teste.dat", "wb");
	for(int j = 0, j < i; j++) {
		printf("Nome:");
		gets(nome);
		printf("Rua:");
		gets(endereco.rua);
		printf("Numero:");
		scanf("%d", &endereco.num);
		printf("Apartamento:");
		scanf("%d", &endereco.apartamento);
		
		fwrite(&nome, sizeof(nome), 1, arq); //grava nome no arquivo
			
		fwrite(&endereco, sizeof(endereco), 1, arq);
	}

	
	fclose(arq);
}