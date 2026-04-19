#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*
    Marcos Vinícius Bispo de Oliveira | RA: 1840482513029  
    Ryan de Souza Silva | RA: 1840482513013 
*/
#define MAX 256

typedef struct {
    int topo;
    char itens[MAX];
} Pilha;

void inicializaPilha(Pilha *p) { p->topo = -1; }
int vaziaPilha(Pilha *p) { return p->topo == -1; }
void empilha(Pilha *p, char x) { p->itens[++(p->topo)] = x; }
char desempilha(Pilha *p) { return p->itens[(p->topo)--]; }


typedef struct {
    int inicio, fim, total;
    char itens[MAX];
} Fila;

void inicializaFila(Fila *f) { f->inicio = 0; f->fim = 0; f->total = 0; }
int vaziaFila(Fila *f) { return f->total == 0; }
void enfileira(Fila *f, char x) {
    f->itens[f->fim] = x;
    f->fim = (f->fim + 1) % MAX;
    f->total++;
}
char desenfileira(Fila *f) {
    char x = f->itens[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->total--;
    return x;
}


int main(void) {
    char s[MAX];
    Fila F;
    Pilha P;
    
    inicializaFila(&F);
    inicializaPilha(&P);
    
    printf("\nFrase? ");
    fgets(s, MAX, stdin); 
    
    for(int i = 0; s[i]; i++) {
        if(isalpha(s[i])) {
            
            enfileira(&F, toupper(s[i]));
            empilha(&P, toupper(s[i]));
        }
    }
    
    while(!vaziaFila(&F) && desenfileira(&F) == desempilha(&P));
    
    if(vaziaFila(&F)) {
        puts("A frase e palindroma");
    } else {
        puts("A frase nao e palindroma");
    }
    
    return 0;
}
