#include <stdio.h>
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029  
    Ryan de Souza Silva | RA: 1840482513013 
*/
int lsearch(int x, int v[], int n) {
    for(int i = 0; i < n; i++) {
        if(x == v[i]) return 1;
    }
    return 0;
}

int main(void) {
    int v[8] = {66, 80, 31, 48, 27, 75, 19, 52};
    
    printf("Procurando 27 (1 = Verdadeiro, 0 = Falso): %d\n", lsearch(27, v, 8));
    printf("Procurando 51 (1 = Verdadeiro, 0 = Falso): %d\n", lsearch(51, v, 8));
    
    return 0;
}
