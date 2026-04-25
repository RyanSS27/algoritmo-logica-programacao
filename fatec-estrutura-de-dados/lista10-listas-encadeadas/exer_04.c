/******************************************************************************
Exercício 4

Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

void exibe(Lista L) {
    printf("[");
    while (L != NULL) {
        printf("%d", L->item);
        if (L->prox != NULL) {
            printf(",");
        }
        L = L->prox;
    }
    printf("]");
}

Lista no(Item x, Lista p) {
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    
    return n;
}

int tamanho(Lista L) {
    int cont = 0;

    while (L != NULL) {
        cont++;
        L = L->prox;
    }
    return cont;
}

int soma(Lista L) {
    int s = 0;

    while (L != NULL) {
        s += L->item;
        L = L->prox;
    }

    return s;
}


int main(void) {
    Lista I = no(3,no(1,no(5,NULL)));
    exibe(I);
    printf("\nTamanho = %d\n",tamanho(I));
    printf("Soma = %d\n", soma(I));
    
    return 0;
}