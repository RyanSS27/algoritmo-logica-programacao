/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
    Ryan de Souza Silva | RA: 1840482513013
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

void exibe(Lista L) {
    if (L == NULL) { printf("NULL\n"); return; }
    printf("%d -> ", L->item);
    exibe(L->prox);
}

Lista rnd(int n, int m) {
    if (n == 0) return NULL;
    Lista L = malloc(sizeof(struct no));
    L->item = rand() % m;
    L->prox = rnd(n - 1, m);
    return L;
}

int main(void) {
    srand(time(NULL));
    printf("Gerando lista com 5 itens aleatorios (0 a 99):\n");
    Lista L = rnd(5, 100);
    exibe(L);
    return 0;
}