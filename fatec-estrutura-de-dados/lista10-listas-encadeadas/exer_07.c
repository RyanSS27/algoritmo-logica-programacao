/******************************************************************************
Exercício 7

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

void anexa(Lista *H, Lista I) {
    if (*H == NULL) {
        *H = I;
        return;
    }

    Lista p = *H;

    while (p->prox != NULL) {
        p = p->prox;
    }

    p->prox = I;
}

int main(void) {

    Lista H = no(4, no(2, NULL));
    Lista I = no(3, no(1, no(5, NULL)));

    printf("H = "); exibe(H);
    printf("I = "); exibe(I);

    printf("Pressione enter");
    getchar();

    anexa(&H, I);

    printf("H = "); exibe(H);
    printf("I = "); exibe(I);

    return 0;
}