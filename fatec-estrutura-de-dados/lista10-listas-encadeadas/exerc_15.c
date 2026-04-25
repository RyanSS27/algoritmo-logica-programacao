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

void exibe(Lista L) {
    if (L == NULL) { printf("NULL\n"); return; }
    printf("%d -> ", L->item);
    exibe(L->prox);
}

Lista clone(Lista L) {
    if (L == NULL) return NULL;
    Lista copia = malloc(sizeof(struct no));
    copia->item = L->item;
    copia->prox = clone(L->prox);
    return copia;
}

int main(void) {
    Lista L1 = no(1, no(2, no(3, NULL)));
    Lista L2 = clone(L1);
    printf("Original: "); exibe(L1);
    printf("Clone:    "); exibe(L2);
    return 0;
}