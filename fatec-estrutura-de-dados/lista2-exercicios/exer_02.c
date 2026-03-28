/**************************
Faça a alteração mínima necessária para que o programa do exercício anterior ordene os números
em ordem decrescente, eliminando números repetidos.
***************************/

#include <stdio.h>
#include "pilha.h"

// Matricula: 18 40 48 25 13 02 9
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
        
        if (vaziap(A) || topo(A) != num) {
            empilha(num, A);
        }

        while (!vaziap(B)) {
            aux = desempilha(B);
            empilha(aux, A);
        }
    }
    
    printf("\nElementos desempilhados da Pilha A (decrescente):\n");
    while (!vaziap(A)) {
        printf("%d ", desempilha(A));
    }
    printf("\n");

    destroip(&A);
    destroip(&B);

    return 0;
}