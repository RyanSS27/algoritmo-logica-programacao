#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"
/*
    Ryan
    RA: 1840482513013
*/
int prio(char o) {
    switch( o ) {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }
    return -1; 
}

char *posfixa(char *e) {
    
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for(int i=0; e[i]; i++) {

        if(e[i] == ' ') continue;

        if( e[i]=='(' ) {
            empilha('(',P);
        }

        else if( isdigit(e[i]) ) {
            s[j++] = e[i];
        }

        else if( strchr("+-/*",e[i]) ) {
            while( !vaziap(P) && prio(topo(P)) >= prio(e[i]) )
                s[j++] = desempilha(P);
            empilha(e[i],P);
        }

        else if( e[i] == ')' ) {
            while( !vaziap(P) && topo(P)!='(' )
                s[j++] = desempilha(P);
            if(!vaziap(P)) desempilha(P); // remove '('
        }
    }

    while( !vaziap(P) )
        s[j++] = desempilha(P);

    s[j] = '\0';
    destroip(&P);
    return s;
}

int valor(char *e) {

    Pilha P = pilha(256);

    for(int i=0; e[i]; i++) {

        if(e[i] == ' ') continue; // 👈 IMPORTANTE

        if( isdigit(e[i]) )
            empilha(e[i]-'0',P);
        else {
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

char *prefixa(char *e) {

    static char s[256];
    char temp[256];
    int n = strlen(e);

    for(int i=0; i<n; i++) {
        temp[i] = e[n - i - 1];
    }
    temp[n] = '\0';

    for(int i=0; temp[i]; i++) {
        if(temp[i] == '(') temp[i] = ')';
        else if(temp[i] == ')') temp[i] = '(';
    }

    char *p = posfixa(temp);

    int m = strlen(p);
    for(int i=0; i<m; i++) {
        s[i] = p[m - i - 1];
    }
    s[m] = '\0';

    return s;
}

int main(void) {
    
    char e[513];
    printf("Infixa? ");
    
    gets(e);

    char *p = posfixa(e);

    printf("Valor: %d\n", valor(p));
    printf("Posfixa: %s\n", p);
    printf("Prefixa: %s\n", prefixa(e));

    return 0;
}
