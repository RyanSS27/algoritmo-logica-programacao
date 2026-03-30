#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"
/*
    Ryan
    RA: 1840482513013
*/
char *posfixa(char *e) {
    
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for(int i=0; e[i]; i++) {

        if(e[i] == ' ') continue;

        if(e[i] == '(') {
            // ignora
        }

        else if(e[i] == 'V' || e[i] == 'F') {
            s[j++] = e[i];
        }

        else if(strchr("!&|", e[i])) {
            empilha(e[i], P);
        }

        else if(e[i] == ')') {
            s[j++] = desempilha(P);
        }
    }

    s[j] = '\0';
    destroip(&P);
    return s;
}

int valor(char *e) {

    Pilha P = pilha(256);

    for(int i=0; e[i]; i++) {

        if(e[i] == 'V') empilha(1, P);
        else if(e[i] == 'F') empilha(0, P);

        else {
            if(e[i] == '!') {
                int x = desempilha(P);
                empilha(!x, P);
            }
            else {
                int y = desempilha(P);
                int x = desempilha(P);

                switch(e[i]) {
                    case '&': empilha(x && y, P); break;
                    case '|': empilha(x || y, P); break;
                }
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
    gets(e);

    char *p = posfixa(e);

    printf("Posfixa: %s\n", p);
    printf("Valor: %d\n", valor(p));

    return 0;
}
