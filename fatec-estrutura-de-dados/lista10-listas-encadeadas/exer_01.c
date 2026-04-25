/******************************************************************************
Exercício 1

Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

void exibe(Lista L) {

    while( L != NULL ) {
        printf("%d\n",L->item);
        L = L->prox;
    }
}

Lista no(Item x, Lista p) {
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    
    return n;
}

int main(void) {
    Lista I = no(3,no(1,no(5,NULL)));
    exibe(I);

    return 0;
}