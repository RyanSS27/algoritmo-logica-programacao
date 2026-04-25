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

void show(Lista L) {
    if (L == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d -> ", L->item);
    show(L->prox);
}

Lista copiar_invertido(Lista L, Lista aux) {
    if (L == NULL) return aux;
    return copiar_invertido(L->prox, no(L->item, aux));
}

Lista inversa(Lista L) {
    return copiar_invertido(L, NULL);
}

int main(void) {
    Lista L = no(1, no(2, no(3, NULL)));
    
    printf("Lista Original: ");
    show(L);
    
    Lista inv = inversa(L);
    
    printf("Lista Invertida: ");
    show(inv);
    
    return 0;
}