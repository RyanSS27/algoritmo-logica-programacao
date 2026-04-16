#include <stdio.h>
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029  
    Ryan de Souza Silva | RA: 1840482513013 
*/
void troca(int v[], int i, int j) {
    int x = v[i];
    v[i] = v[j];
    v[j] = x;
}

void bsort(int v[], int n) {
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if(v[j] > v[j+1]) troca(v, j, j+1);
        }
    }
}

void exibe(int v[], int n) {
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
}

int main(void) {
    int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80};
    printf("Vetor original: ");
    exibe(v, 10);
    
    bsort(v, 10);
    
    printf("Vetor ordenado: ");
    exibe(v, 10);
    return 0;
}
