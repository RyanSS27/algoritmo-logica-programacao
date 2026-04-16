#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029  
    Ryan de Souza Silva | RA: 1840482513013 
*/
void intercala(int v[], int p, int m, int u) {
    int *w = malloc((u - p + 1) * sizeof(int));
    int i = p, j = m + 1, k = 0;
    while(i <= m && j <= u) w[k++] = (v[i] < v[j]) ? v[i++] : v[j++];
    while(i <= m) w[k++] = v[i++];
    while(j <= u) w[k++] = v[j++];
    for(k = 0; k <= u - p; k++) v[p + k] = w[k];
    free(w);
}

void ms(int v[], int p, int u) {
    if(p == u) return;
    int m = (p + u) / 2;
    ms(v, p, m); ms(v, m + 1, u); intercala(v, p, m, u);
}
void msort(int v[], int n) { ms(v, 0, n - 1); }

void preenche(int v[], int n, int s) {
    srand(s);
    for(int i = 0; i < n; i++) v[i] = rand() % 1000;
}

int main(void) {
 
    int *v = malloc(10000000 * sizeof(int)); 
    if (!v) {
        puts("Erro: Falta de memoria.");
        return 1;
    }
    
    puts("        n  msort");
 
    for(int n = 1000000; n <= 10000000; n += 1000000) {
        preenche(v, n, 1);
        double t = clock();
        msort(v, n);
        double m = (clock() - t) / CLOCKS_PER_SEC;
        
        printf("%9d %5.2f\n", n, m);
    }
    
    free(v);
    return 0;
}
