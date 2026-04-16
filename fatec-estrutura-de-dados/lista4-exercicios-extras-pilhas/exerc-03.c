#include <stdio.h>
#include <string.h>

#define MAX 256

typedef struct {
    int topo;
    char itens[MAX];
} PilhaChar;

void inicializa(PilhaChar *p) { p->topo = -1; }
int vazia(PilhaChar *p) { return p->topo == -1; }
void empilha(PilhaChar *p, char x) { p->itens[++(p->topo)] = x; }
char desempilha(PilhaChar *p) { return p->itens[(p->topo)--]; }

void inverte(char s[]) {
    PilhaChar p;
    inicializa(&p);
    
    int tam = strlen(s);
    for (int i = 0; i < tam; i++) {
        empilha(&p, s[i]);
    }
    for (int i = 0; i < tam; i++) {
        s[i] = desempilha(&p);
    }
}

int main() {
    char texto[MAX];
    printf("Digite uma string: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = 0;
    
    inverte(texto);
    
    printf("String invertida: %s\n", texto);
    return 0;
}