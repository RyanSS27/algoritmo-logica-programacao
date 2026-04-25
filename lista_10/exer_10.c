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

int pertence(Item x, Lista L) {
    if (L == NULL) {
        return 0;
    }
    if (L->item == x) {
        return 1;
    }
    return pertence(x, L->prox);
}

int main(void) {
    Lista L = no(10, no(20, no(30, NULL)));
    
    int busca = 20;

    if (pertence(busca, L)) {
        printf("O item %d pertence a lista.\n", busca);
    } else {
        printf("O item %d nao pertence a lista.\n", busca);
    }

    return 0;
}