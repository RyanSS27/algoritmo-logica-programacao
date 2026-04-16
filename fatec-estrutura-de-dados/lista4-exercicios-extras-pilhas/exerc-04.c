#include <stdio.h>

#define MAX 100

typedef struct {
    int topo;
    int itens[MAX];
} Pilha;

void inicializa(Pilha *p) { p->topo = -1; }
int vazia(Pilha *p) { return p->topo == -1; }
void empilha(Pilha *p, int x) { p->itens[++(p->topo)] = x; }
int desempilha(Pilha *p) { return p->itens[(p->topo)--]; }

int maior(Pilha *P) {
    if (vazia(P)) return -1; 
    Pilha Aux;
    inicializa(&Aux);
    
    int max_val = desempilha(P);
    empilha(&Aux, max_val);
    
    while (!vazia(P)) {
        int atual = desempilha(P);
        if (atual > max_val) {
            max_val = atual;
        }
        empilha(&Aux, atual);
    }
    
    while (!vazia(&Aux)) {
        empilha(P, desempilha(&Aux));
    }
    
    return max_val;
}

int main() {
    Pilha p;
    inicializa(&p);
    empilha(&p, 10);
    empilha(&p, 45);
    empilha(&p, 23);
    empilha(&p, 8);
    
    printf("O maior elemento e: %d\n", maior(&p));
    printf("Elemento no topo apos a busca: %d\n", desempilha(&p));
    return 0;
}