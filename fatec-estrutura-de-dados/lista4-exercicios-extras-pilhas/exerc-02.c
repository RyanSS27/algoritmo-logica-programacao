#include <stdio.h>
#include <stdlib.h>

#define MAX 100

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
    Pilha A, B;
    inicializa(&A);
    inicializa(&B);
    
    int n, num;
    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);
        
       
        while (!vazia(&A) && topo(&A) > num) {
            empilha(&B, desempilha(&A));
        }
        
        if (!vazia(&A) && topo(&A) == num) {
        } else {
            empilha(&A, num);
        }
        
        while (!vazia(&B)) {
            empilha(&A, desempilha(&B));
        }
    }
    
    printf("Sequencia ordenada decrescente sem repeticao: ");
    while (!vazia(&A)) {
        printf("%d ", desempilha(&A));
    }
    printf("\n");
    return 0;
}