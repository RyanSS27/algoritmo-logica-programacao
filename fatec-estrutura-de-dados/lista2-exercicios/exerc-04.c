#include <stdio.h>
#include <string.h>
#include "pilha.h"

/*
    Ryan
    RA: 1840482513013
*/
int main() {
    char exp[100];
    int balanceada = 1;

    printf("Digite a expressao (chaves, colchetes e parênteses): ");
    scanf("%s", exp);

    int n = strlen(exp);
    Pilha P = pilha(n);

    for (int i = 0; i < n; i++) {
        char atual = exp[i];

        if (atual == '(' || atual == '[' || atual == '{') {
            empilha(atual, P);
        } 
        
        else if (atual == ')' || atual == ']' || atual == '}') {
            if (vaziap(P)) {
                balanceada = 0;
                break;
            }

            char topoItem = desempilha(P);

            if ((atual == ')' && topoItem != '(') ||
                (atual == ']' && topoItem != '[') ||
                (atual == '}' && topoItem != '{')) {
                balanceada = 0;
                break;
            }
        }
    }

    if (!vaziap(P)) {
        balanceada = 0;
    }

    if (balanceada) {
        printf("A expressao esta balanceada.\n");
    } else {
        printf("A expressao nao esta balanceada.\n");
    }

    destroip(&P);
    return 0;
}
