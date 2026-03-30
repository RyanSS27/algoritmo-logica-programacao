#include <stdio.h>
#include "pilha.h" // trocar a pilha para char *
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
        empilha(s,P);
    }
    while( !vaziap(P) ) puts(desempilha(P));
    return 0;
}

/******************************************************************************
Sairá “tres”, “tres” e “tres”, pois como está utilizando ponteiros, estamos empilhando seu endereço, 
como digitamos por fim o “tres” essa mudança altera o valor da variável e como empilhamos os mesmos 
três endereços a saída será “tres”, 
todos os elementos da pilha apontam para a mesma região de memória (o array s).
*******************************************************************************/
