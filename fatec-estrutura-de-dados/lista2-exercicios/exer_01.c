/******************************************************************************
Crie um programa que usa duas pilhas A e B para ordenar uma sequência de n números dados
pelo usuário. A ideia é organizar a pilha A de modo que nenhum item seja empilhado sobre outro
menor (use a pilha B apenas para manobra) e, depois, descarregar e exibir os itens da pilha A.
*******************************************************************************/

#include <stdio.h>
#include "pilha.h"

// Matricula: 1840482513029
// 1 - True | 0 - False
int main() {
    int n, num, aux;
    
    printf("Quantos números deseja ordenar? ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    Pilha A = pilha(n);
    Pilha B = pilha(n);

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        while (!vaziap(A) && topo(A) > num) {
            aux = desempilha(A);
            empilha(aux, B);
        }

        empilha(num, A);

        while (!vaziap(B)) {
            aux = desempilha(B);
            empilha(aux, A);
        }
    }
    
    printf("\nElementos desempilhados da Pilha A (do maior para o menor):\n");
    while (!vaziap(A)) {
        printf("%d ", desempilha(A));
    }
    printf("\n");

    destroip(&A);
    destroip(&B);

    return 0;
}