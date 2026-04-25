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

int equal(Lista A, Lista B) {
    if (A == NULL && B == NULL) return 1;
    if (A == NULL || B == NULL || A->item != B->item) return 0;
    return equal(A->prox, B->prox);
}

int main(void) {
    Lista a = no(1, no(2, NULL));
    Lista b = no(1, no(2, NULL));
    printf("Lista A e B sao iguais? %s\n", equal(a, b) ? "Sim" : "Nao");
    return 0;
}