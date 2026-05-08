/******************************************************************************
Exercício 7

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

void ins(Item x, Lista *L) {
    while (*L != NULL && (*L)->item < x)
        L = &(*L)->prox;

    *L = no(x, *L);
}

void rem(Item x, Lista *L) {

    while (*L != NULL && (*L)->item < x)
        L = &(*L)->prox;

    if (*L == NULL || (*L)->item > x)
        return;

    Lista n = *L;
    *L = n->prox;

    free(n);
}

void exibe(Lista L) {
    while (L != NULL) {
        printf("%d ", L->item);
        L = L->prox;
    }
    printf("\n");
}

int main(void) {

    Lista I = NULL;

    ins(4, &I);
    ins(1, &I);
    ins(3, &I);
    ins(5, &I);
    ins(2, &I);

    rem(3, &I);

    exibe(I);

    return 0;
}