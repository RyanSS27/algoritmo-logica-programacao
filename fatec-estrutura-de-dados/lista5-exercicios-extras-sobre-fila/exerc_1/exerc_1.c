#include <stdio.h>
#include "fila.h"
#include "pilha.h"
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
    Ryan de Souza Silva | RA: 1840482513013 
*/
int ttm(Fila f, Pilha p) {
    int t = 0;
    int x, y;

    while (!vaziap(p)) {
        y = topo(p);
        x = desenfileira(f);
        t++;

        if (x == y) {
            desempilha(p);
        } else {
            enfileira(x, f);
        }
    }

    return t;
}

int main() {
    Fila f = fila(3);
    Pilha p = pilha(3);

    enfileira(2, f);
    enfileira(3, f);
    enfileira(1, f);

    empilha(2, p);
    empilha(3, p);
    empilha(1, p);

    printf("Tempo: %d\n", ttm(f, p));

    destroif(&f);
    destroip(&p);

    return 0;
}