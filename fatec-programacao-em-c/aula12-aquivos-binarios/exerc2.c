#include<stdio.h>
#define MAX 5

struct tipoEndereco {
	char rua[30];
	int num;
	int apartamento;
} endereco;


int main() {
	FILE *arq;
	char nome[20];
	arq = fopen("teste.dat", "rb");
	fread(&nome, sizeof(nome), 1, arq);
	fread(&endereco, sizeof(endereco), 1, arq);
	fclose(arq);
	printf("\n\n%s mora na rua %s, numero %d, apartamento %d.\n", nome, endereco.rua, endereco.num, endereco.apartamento);
}