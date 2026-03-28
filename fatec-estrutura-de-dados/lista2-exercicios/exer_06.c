/******************************************************************************
Use _strdup(s), declarada em string.h, para corrigir o programa do exercício anterior.
Essa função duplica a cadeia s num área de memória, alocada pela função malloc(), e devolve
o endereço dessa área. Depois de usada, essa cópia pode ser destruída com a função free().
*******************************************************************************/

//Matricula: 18 40 48 25 13 02 9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h" // pilha de char *

int main(void) {
    Pilha P = pilha(5);
    char s[11];
    for(int i=1; i<=3; i++) {
        printf("? ");
        gets(s);
        empilha(strdup(s),P);
    }
    
    while( !vaziap(P) ) {
        char *aux = desempilha(P);
        puts(aux);
        free(aux);
    }
    
    return 0;
}