#include <stdio.h>
#include <string.h>
#define MAX 5
 
struct contato {
    char nome[30], tel[40];
} a;
 
void main() {
    FILE *arq;
    int achei = 0;
    char busca[20], aux[20];
 
    printf("Qual o nome que deseja buscar? ");
    gets(busca);
 
    arq = fopen("testeExerc3.dat", "rb");
 
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo ou arquivo nao existe.\n");
        return;
    }
 
    fseek(arq, 0, SEEK_SET);
 
    while (fread(&a, sizeof(a), 1, arq) == 1) {
        if (strcmp(busca, a.nome) == 0) {
            printf("\n\nRegistro Encontrado!\nNome: %s - Telefone: %s\n", a.nome, a.tel);
            achei = 1;
            break;
        }
    }
 
    if (achei == 0) {
        printf("Registro nao encontrado!");
    }
 
    fclose(arq);
}