#include <stdio.h>
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029  
    Ryan de Souza Silva | RA: 1840482513013 
*/
#define MAX 100
#define INFINITO -1

typedef struct {
    int topo;
    int itens[MAX];
} Pilha;

void inicializa(Pilha *p) { p->topo = -1; }
int vazia(Pilha *p) { return p->topo == -1; }
void empilha(Pilha *p, int x) { p->itens[++(p->topo)] = x; }
int desempilha(Pilha *p) { return p->itens[(p->topo)--]; }
int topo(Pilha *p) { return p->itens[p->topo]; }

int main() {
    int v[] = {9, 3, 5, 1, 7, 8};
    int n = sizeof(v) / sizeof(v[0]);
    int pmi[MAX];
    Pilha p;
    inicializa(&p);
    
    for (int i = n - 1; i >= 0; i--) {
        while (!vazia(&p) && topo(&p) <= v[i]) {
            desempilha(&p);
        }
        
        if (vazia(&p)) {
            pmi[i] = INFINITO;
        } else {
            pmi[i] = topo(&p);
        }
        
        empilha(&p, v[i]);
    }
    
  
    for (int i = 0; i < n; i++) {
        if (pmi[i] == INFINITO) {
            printf("pmi(%d) = infinito\n", v[i]);
        } else {
            printf("pmi(%d) = %d\n", v[i], pmi[i]);
        }
    }
    
    return 0;
}
