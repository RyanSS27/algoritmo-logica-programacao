/**********
Usando pilha, crie uma função para verificar se uma expressão composta apenas por chaves,
colchetes e parênteses, representada por uma cadeia de caracteres, está ou não balanceada. Por
exemplo, as expressões "[{()()}{}]" e "{[([{}])]}" estão balanceadas, mas as
expressões "{[(}])" e "{[)()(]}" não estão.
*********/

#include <stdio.h>
#include <string.h>
#include "pilha.h"

// Matricula: 18 40 48 25 13 02 9
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