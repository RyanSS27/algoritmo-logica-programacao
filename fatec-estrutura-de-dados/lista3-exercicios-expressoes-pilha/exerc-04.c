#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h" 

/*
    Ryan
    RA: 1840482513013
*/
int prio(char o) {
    switch(o) {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }
    return -1;
}

char *posfixa(char *e) {
    static char s[512];
    int j = 0;
    Pilha P = pilha(256);
    for(int i=0; e[i]; i++) {
        if( isspace(e[i]) ) continue;
        if( isdigit(e[i]) ) {
            while( isdigit(e[i]) ) s[j++] = e[i++];
            s[j++] = ' ';
            i--; 
        }
        else if( e[i] == '(' ) empilha('(', P);
        else if( strchr("+-*/", e[i]) ) {
            while( !vaziap(P) && prio(topo(P)) >= prio(e[i]) ) {
                s[j++] = desempilha(P);
                s[j++] = ' ';
            }
            empilha(e[i], P);
        }
        else if( e[i] == ')' ) {
            while( !vaziap(P) && topo(P) != '(' ) {
                s[j++] = desempilha(P);
                s[j++] = ' ';
            }
            desempilha(P);
        }
    }
    while( !vaziap(P) ) {
        s[j++] = desempilha(P);
        s[j++] = ' ';
    }
    if (j > 0) s[j-1] = '\0';
    else s[0] = '\0';
    destroip(&P);
    return s;
}

int valor(char *e) {
    Pilha P = pilha(256);
    for(int i=0; e[i]; i++) {
        if( isspace(e[i]) ) continue;
        if( isdigit(e[i]) ) {
            empilha(atoi(&e[i]), P);
            while( isdigit(e[i]) ) i++;
            i--;
        } else {
            int y = desempilha(P);
            int x = desempilha(P);
            switch( e[i] ) {
                case '+': empilha(x+y,P); break;
                case '-': empilha(x-y,P); break;
                case '*': empilha(x*y,P); break;
                case '/': empilha(x/y,P); break;
            }
        }
    }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

int main(void) {
    char e[513];
    printf("Infixa? ");
    if (fgets(e, 513, stdin)) {
        char *p = posfixa(e);
        printf("Posfixa: %s\n", p);
        printf("Valor: %d\n", valor(p));
    }
    return 0;
}
