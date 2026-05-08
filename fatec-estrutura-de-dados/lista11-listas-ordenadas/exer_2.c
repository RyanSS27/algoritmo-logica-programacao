/******************************************************************************
Exercício 2

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

void ins_isr(Item x, Lista *L) {
    while (*L != NULL && (*L)->item < x)
        L = &(*L)->prox;

    if (*L == NULL || (*L)->item != x)
        *L = no(x, *L);
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

    ins_isr(4, &I);
    ins_isr(1, &I);
    ins_isr(3, &I);
    ins_isr(5, &I);
    ins_isr(2, &I);
    ins_isr(3, &I); // Valor repetido 

    exibe(I);

    return 0;
}