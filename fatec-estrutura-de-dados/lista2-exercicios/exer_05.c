/******************************************************************************
Qual será a saída, se o usuário digite as cadeias "um", "dois" e "tres"? Por quê?
*******************************************************************************/

//Matricula: 18 40 48 25 13 02 9

#include <stdio.h>
#include "pilha.h" // pilha de char *
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
