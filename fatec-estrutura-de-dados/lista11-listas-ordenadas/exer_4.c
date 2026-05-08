/******************************************************************************
Exercício 4

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

void ins_rsr(Item x, Lista *L) {
    if (*L == NULL)
        *L = no(x, NULL);

    else if ((*L)->item == x)
        return;

    else if ((*L)->item > x)
        *L = no(x, *L);

    else
        ins_rsr(x, &(*L)->prox);
}

// void ins_rec(Item x, Lista *L) {
//     if (*L == NULL || (*L)->item >= x)
//         *L = no(x, *L);
//     else
//         ins_rec(x, &(*L)->prox);
// }

// void ins_isr(Item x, Lista *L) {
//     while (*L != NULL && (*L)->item < x)
//         L = &(*L)->prox;

//     if (*L == NULL || (*L)->item != x)
//         *L = no(x, *L);
// }

void exibe(Lista L) {
    while (L != NULL) {
        printf("%d ", L->item);
        L = L->prox;
    }
    printf("\n");
}

int main(void) {
    Lista I = NULL;

    ins_rsr(4, &I);
    ins_rsr(1, &I);
    ins_rsr(3, &I);
    ins_rsr(5, &I);
    ins_rsr(2, &I);
    ins_rsr(3, &I); //Valor repetido

    exibe(I);

    return 0;
}