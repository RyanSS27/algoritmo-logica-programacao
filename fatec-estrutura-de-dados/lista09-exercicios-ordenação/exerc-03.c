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

void empurra(int v[], int u) {
    if (u == 0) return;
    empurra(v, u - 1);
    if (v[u - 1] > v[u]) troca(v, u - 1, u);
}

void bsr(int v[], int n) {
    if (n <= 1) return;
    empurra(v, n - 1); 
    bsr(v, n - 1);    
}

void exibe(int v[], int n) {
    printf("{");
    for(int i = 0; i < n; i++) {
        printf("%d%s", v[i], (i < n - 1) ? "," : "");
    }
    printf("}\n");
}

int main(void) {
    int v[9] = {51, 82, 38, 99, 75, 19, 69, 46, 27};
    printf("Antes: ");
    exibe(v, 9);
    
    bsr(v, 9);
    
    printf("Depois: ");
    exibe(v, 9);
    return 0;
}
