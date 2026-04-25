/******************************************************************************
Exercício 6

Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

Lista intervalo(int n) {
    Lista L = NULL;

    for (int i = n; i >= 1; i--) {
        L = no(i, L);
    }

    return L;
}

int main(void) {
    Lista I = intervalo(5);

    exibe(I);

    return 0;
}