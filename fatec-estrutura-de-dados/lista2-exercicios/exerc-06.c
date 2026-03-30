#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h" // trocar pilha para char *

/*
  Ryan
  RA: 1840482513013
*/
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
