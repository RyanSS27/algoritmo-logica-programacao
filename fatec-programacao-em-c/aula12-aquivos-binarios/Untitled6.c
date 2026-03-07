#include <stdio.h>
#define MAX 5

typedef struct {
    char nome[20];
    char rua[30];
    int num;
    int apartamento;
} tipoEndereco;

int main() {
    int i = 3;
    tipoEndereco endereco[i];
    
    FILE *arq;
    arq = fopen("testeModificado.dat", "rb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    
    fread(endereco, sizeof(tipoEndereco), i, arq);
    fclose(arq);

    for (int j = 0; j < i; j++) {    
        printf("\n\n%s mora na rua %s, numero %d, apartamento %d.\n",
               endereco[j].nome, endereco[j].rua, endereco[j].num, endereco[j].apartamento);    
    }

    return 0;
}
