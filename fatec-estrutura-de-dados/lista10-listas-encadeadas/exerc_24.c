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

void replace(Item x, Item y, Lista L) {
    if (L == NULL) return;
    if (L->item == x) L->item = y;
    replace(x, y, L->prox);
}

int main(void) {
    Lista L = no(1, no(2, no(1, NULL)));
    printf("Antes (substituir 1 por 9): "); exibe(L);
    replace(1, 9, L);
    printf("Depois: "); exibe(L);
    return 0;
}