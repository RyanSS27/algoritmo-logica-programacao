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
    Lista n = (Lista)malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

int sum(Lista L) {
    if (L == NULL) return 0;
    return L->item + sum(L->prox);
}

int main(void) {
    Lista L = no(10, no(20, no(30, NULL))); 
    printf("Soma: %d\n", sum(L));
    return 0;
}