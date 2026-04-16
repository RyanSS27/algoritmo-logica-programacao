#include <stdio.h>
#include <stdlib.h>
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029  
    Ryan de Souza Silva | RA: 1840482513013 
*/
void preenche(int v[], int n, int s) {
    srand(s);
    for(int i = 0; i < n; i++) v[i] = rand() % 1000;
}

void exibe(int v[], int n) {
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
}

int main(void) {
    int v[15];
    printf("Vetor preenchido com semente 1:\n");
    preenche(v, 15, 1);
    exibe(v, 15);
    
    printf("\nVetor preenchido com semente 42:\n");
    preenche(v, 15, 42);
    exibe(v, 15);

    return 0;
}
