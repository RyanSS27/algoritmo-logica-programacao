/******************************************************************************
Exercício 8

Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int item;
    struct no *prox;
} *Lista;

Lista no(int x, Lista p) {
    Lista novo = (Lista) malloc(sizeof(struct no));
    novo->item = x;
    novo->prox = p;
    return novo;
}

void exibe(Lista L) {
    printf("[");

    while (L != NULL) {
        printf("%d", L->item);

        if (L->prox != NULL) {
            printf(",");
        }

        L = L->prox;
    }

    printf("]\n");
}

int ultimo(Lista L) {
    if (L == NULL) {
        printf("Erro: lista vazia\n");
        exit(1);
    }

    while (L->prox != NULL) {
        L = L->prox;
    }

    return L->item;
}

int main(void) {
    Lista I = no(3, no(1, no(5, NULL)));

    exibe(I);
    printf("Ultimo = %d\n", ultimo(I));

    return 0;
}