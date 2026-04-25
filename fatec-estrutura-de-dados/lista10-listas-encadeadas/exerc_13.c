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

int main(void) {
 
    Lista L = no(10, no(20, no(30, NULL)));

    printf("Exibindo a lista:\n");
    show(L);

    return 0;
}