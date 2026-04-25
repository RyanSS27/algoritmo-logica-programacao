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

int sorted(Lista L) {
    if (L == NULL || L->prox == NULL) return 1;
    if (L->item > L->prox->item) return 0;
    return sorted(L->prox);
}

int main(void) {
    Lista L = no(10, no(20, no(30, NULL)));
    printf("Lista: 10, 20, 30\n");
    printf("Esta ordenada? %s\n", sorted(L) ? "Sim" : "Nao");
    return 0;
}