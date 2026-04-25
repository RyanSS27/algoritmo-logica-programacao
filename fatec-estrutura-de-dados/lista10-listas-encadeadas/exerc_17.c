/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
    Ryan de Souza Silva | RA: 1840482513013
*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

Item last(Lista L) {
    if (L->prox == NULL) return L->item;
    return last(L->prox);
}

int main(void) {
    Lista L = no(7, no(14, no(21, NULL)));
    printf("Lista: 7 -> 14 -> 21\n");
    printf("Ultimo item: %d\n", last(L));
    return 0;
}