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

Item minimum(Lista L) {
    if (L->prox == NULL) return L->item;
    Item m = minimum(L->prox);
    return (L->item < m) ? L->item : m;
}

int main(void) {
    Lista L = no(45, no(12, no(78, NULL)));
    printf("Lista: 45, 12, 78\n");
    printf("Menor valor: %d\n", minimum(L));
    return 0;
}