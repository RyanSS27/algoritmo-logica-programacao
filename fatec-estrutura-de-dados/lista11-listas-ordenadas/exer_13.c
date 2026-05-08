/******************************************************************************
Exercício 13

Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct no {
    Item item;
    struct no *prox;
} No;

typedef No* Lista;

Lista no(Item x, Lista p) {
    Lista n = malloc(sizeof(No));
    n->item = x;
    n->prox = p;
    return n;
}

void ins_ini(Item x, Lista *L) {
    *L = no(x, *L);
}

void exibe(Lista L) {
    while (L != NULL) {
        printf("%d ", L->item);
        L = L->prox;
    }
    printf("\n");
}

int osc(Lista L) {
    if (L == NULL || L->prox == NULL)
        return 1;

    if (L->item > L->prox->item)
        return 0;

    return osc(L->prox);
}

int oec(Lista L) {
    if (L == NULL || L->prox == NULL)
        return 1;

    if (L->item >= L->prox->item)
        return 0;

    return oec(L->prox);
}

int osd(Lista L) {
    if (L == NULL || L->prox == NULL)
        return 1;

    if (L->item < L->prox->item)
        return 0;

    return osd(L->prox);
}

int main(void) {

    Lista L = NULL;

    ins_ini(1,&L);
    ins_ini(2,&L);
    ins_ini(2,&L);
    ins_ini(3,&L);
    ins_ini(4,&L);

    exibe(L);

    printf("osc: %d\n", osc(L));
    printf("oec: %d\n", oec(L));
    printf("osd: %d\n", osd(L));
    
    return 0;
}