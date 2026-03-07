#include <stdio.h>
#define MAX 5

struct contato {
    char nome[30], tel[40];
} vet[MAX];

int main() {
    FILE *arq;
    int i;

    // Escreve no arquivo binário
    arq = fopen("testeExerc3.dat", "wb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo para escrita!\n");
        return 1;
    }

    for (i = 0; i < MAX; i++) {
        printf("Nome: ");
        gets(vet[i].nome);   
        printf("Tel: ");
        gets(vet[i].tel);

        fwrite(&vet[i], sizeof(vet[i]), 1, arq);
    }

    fclose(arq);

    // Lê do arquivo binário
    arq = fopen("testeExerc3.dat", "rb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    for (i = 0; i < MAX; i++) {
        fread(&vet[i], sizeof(vet[i]), 1, arq);
    }

    fclose(arq);

    for (i = 0; i < MAX; i++) {
        printf("\n\nNome: %s - Telefone: %s\n", vet[i].nome, vet[i].tel);
    }

    return 0;
}
