#include <stdio.h>
#include <string.h>
#include "pilha.h"

/*
    Ryan
    RA: 1840482513013
*/
int main() {
    char frase[100];
    int tamanho, num, aux;
    
    printf("Digite a frase desejada?");
    fgets(frase, sizeof(frase), stdin);
    
    Pilha A = pilha(strlen(frase));
    printf("Resultado: ");

    for (int i = 0; i <= strlen(frase); i++) {
        
        if (frase[i] != ' ' && frase[i] != '\0') {
            empilha(frase[i], A);
        } 
        else {
            while (!vaziap(A)) {
                printf("%c", desempilha(A));
            }

            if (frase[i] == ' ') {
                printf(" ");
            }
        }
    }
    printf("\n");
    destroip(&A);

    return 0;
}
