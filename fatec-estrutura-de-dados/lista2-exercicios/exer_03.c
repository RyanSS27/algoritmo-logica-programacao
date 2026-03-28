/**********
Usando uma pilha, crie um programa para inverter a ordem das letras nas palavras de uma frase,
sem inverter a ordem das palavras na frase. Por exemplo, se for digitada a frase "apenas um
teste", o programa deverá produzir a seguinte saída: sanepa mu etset.
*********/

#include <stdio.h>
#include <string.h>
#include "pilha.h"

// Matricula: 18 40 48 25 13 02 9
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