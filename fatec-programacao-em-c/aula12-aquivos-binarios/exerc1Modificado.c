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
    arq = fopen("testeModificado.dat", "wb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    for (int j = 0; j < i; j++) {
        printf("Nome: ");
        gets(endereco[j].nome);   
        printf("Rua: ");
        gets(endereco[j].rua);
        printf("Numero: ");
        scanf("%d", &endereco[j].num);
        printf("Apartamento: ");
        scanf("%d", &endereco[j].apartamento);
        getchar(); 
            
        fwrite(&endereco[j], sizeof(tipoEndereco), 1, arq);
    }

    fclose(arq);
    return 0;
}
