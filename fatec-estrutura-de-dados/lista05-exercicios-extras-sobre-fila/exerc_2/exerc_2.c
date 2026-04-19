#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "fila.h"
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
    Ryan de Souza Silva | RA: 1840482513013 
*/

int concha(char *c) { // verifica se é concha
    Pilha P = pilha(strlen(c));
    int i;

    for(i = 0; c[i] != '\0'; i++) {
        if(!vaziap(P) && topo(P) == c[i]) {
            desempilha(P);
        } else {
            empilha(c[i], P);
        }
    }

    int resultado = vaziap(P);
    destroip(&P);
    return resultado;
}

void filtra(Fila F) { // filtra e mostra apenas conchas
    int total = 0;

    while(!vaziaf(F)) {
        char *c = desenfileira(F);

        if(concha(c)) {
            printf("%s\n", c);
            total++;
        }
    }

    printf("\nTotal de conchas: %d\n", total);
}

int main(void) {
    Fila F = fila(20);

    enfileira("AAAAAAAABAAABA",F);
    enfileira("BBBBBBBBBBBBBB",F);
    enfileira("ABBABBABBABB",F);
    enfileira("AAABAAABBABAAA",F);
    enfileira("ABAABAAAAAAAAA",F);
    enfileira("AABAAAAAABAAAA",F);
    enfileira("AAAABB",F);
    enfileira("AABBBBAABAAB",F);
    enfileira("ABAAAAAAAAAB",F);
    enfileira("ABABBBABAB",F);
    enfileira("BBBBBBBBBBBBBB",F);
    enfileira("AABAABAAAA",F);
    enfileira("AABAAABBBBBABB",F);
    enfileira("BBBAAAAABA",F);
    enfileira("BBBBBBBBBBBBBB",F);
    enfileira("AAAAAAAAAAAABB",F);
    enfileira("BAAAAABAAAAAAA",F);
    enfileira("BBBBABBBBBBA",F);
    enfileira("BBABABAAAAAABB",F);
    enfileira("ABAABAABAB",F);

    filtra(F);

    destroif(&F);
    return 0;
}
