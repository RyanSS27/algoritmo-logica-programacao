#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10
int main (void)
{
    int vetor[MAX], i, valor, *v;
    v = &vetor[0];
    printf ("\n Digite um valor para ser gravado no ");
    printf ("\n indice\tEndereco de Memoria \n");
    for (i=0; i<MAX; i++) {
        printf (" [%d]\t%p-> ", i, (v+i));
        scanf ("%d", &valor);
        getchar();
        *(v+i) = valor;
        //valor é gravado no endereco apontado pelo ponteiro
    }
    
    system ("cls");
    
    printf ("\n Os valores gravados no vetor foram:\n ");
    for (i=0; i<MAX; i++) {
        printf("\n vetor[%d], ponteiro (%p) = %d ", i, (v+i), vetor[i]);
    }
    system ("pause");
    
    return 0;
}