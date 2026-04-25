/******************************************************************************
Exercício 5

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

Lista aleatoria(int n, int m) {
    Lista L = NULL;

    for (int i = 0; i < n; i++) {
        int valor = rand() % m;
        L = no(valor, L);
    }

    return L;
}

int main(void) {
    srand(time(NULL));
    Lista A = aleatoria(10, 100);

    exibe(A);

    return 0;
}