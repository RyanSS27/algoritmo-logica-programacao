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

void show(Lista L) {
    if (L == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d -> ", L->item);
    show(L->prox);
}

Lista intervalo(int p, int u) {
    if (p > u) {
        return NULL;
    }

    Lista n = (Lista)malloc(sizeof(struct no));
    n->item = p;

    n->prox = intervalo(p + 1, u);

    return n;
}

int main(void) {
    int p = -2;
    int u = 3;

    printf("Gerando lista no intervalo [%d, %d]:\n", p, u);
    
    Lista L = intervalo(p, u);

    show(L);

    return 0;
}