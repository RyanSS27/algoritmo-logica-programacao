/******************************************************************************
Exercício 6

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

void exibe_ri(Lista L) {
    if (L != NULL) {
        exibe_ri(L->prox);
        printf("%d\n", L->item);
    }
}

Lista no(Item x, Lista p) {
    Lista n = malloc(sizeof(No));
    n->item = x;
    n->prox = p;
    return n;
}

void ins_rec(Item x, Lista *L) {
    if (*L == NULL || (*L)->item >= x)
        *L = no(x, *L);
    else
        ins_rec(x, &(*L)->prox);
}

int main(void) {
    Lista I = NULL;

    ins_rec(4, &I);
    ins_rec(1, &I);
    ins_rec(3, &I);
    ins_rec(5, &I);
    ins_rec(2, &I);

    exibe_ri(I);

    return 0;
}