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

int count(Item x, Lista L) {
    if (L == NULL) return 0;
    return (L->item == x) + count(x, L->prox);
}

int main(void) {
    Lista L = no(5, no(2, no(5, no(5, NULL))));
    printf("Lista: 5, 2, 5, 5\n");
    printf("Quantas vezes o 5 aparece? %d\n", count(5, L));
    return 0;
}