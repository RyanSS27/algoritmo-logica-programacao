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

Item nth(int n, Lista L) {
    if (n == 1) return L->item;
    return nth(n - 1, L->prox);
}

int main(void) {
    Lista L = no(100, no(200, no(300, NULL)));
    printf("Lista: 100, 200, 300\n");
    printf("O 3o item e: %d\n", nth(3, L));
    return 0;
}