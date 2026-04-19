#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila.h"
#define dim 9
#define cor(i,j) (i>=0 && i<dim && j>=0 && j<dim ? I[i][j] : -1)
#define par(i,j) ((i)*100+(j))
#define lin(p) ((p)/100)
#define col(p) ((p)%100)

/*
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*/

int I[dim][dim] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 4, 4, 4, 4, 4, 0, 1},
    {1, 0, 4, 15, 15, 15, 4, 0, 1},
    {1, 0, 4, 14, 14, 14, 4, 0, 1},
    {1, 0, 4, 15, 15, 15, 4, 0, 1},
    {1, 0, 4, 4, 4, 4, 4, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1}
};


void exiba(int I[dim][dim]) {
    system("cls");
    for(int i=-1; i<dim; i++) {
        _textcolor(8);
        for(int j=-1; j<dim; j++) {
            if( i<0 && j<0 ) printf("  ");
            else if( i<0 ) printf("%2d", j);
            else if( j<0 ) printf("\n%2d", i);
            else {
                _textcolor(I[i][j]);
                printf("%c%c", 219, 219);
            }
        }
    }
    _textcolor(7);
}

void colorir(int I[dim][dim], int i, int j, int n) {
    int a = I[i][j];
    if (a == n) return; 

    Fila F = fila(dim * dim);
    I[i][j] = n;
    enfileira(par(i,j), F);

    while( !vaziaf(F) ) {
        int p = desenfileira(F);
        int r = lin(p);
        int c = col(p);

        if( cor(r-1,c) == a ) { I[r-1][c] = n; enfileira(par(r-1,c), F); }
        if( cor(r,c+1) == a ) { I[r][c+1] = n; enfileira(par(r,c+1), F); }
        if( cor(r+1,c) == a ) { I[r+1][c] = n; enfileira(par(r+1,c), F); }
        if( cor(r,c-1) == a ) { I[r][c-1] = n; enfileira(par(r,c-1), F); }
    }
    destroif(&F);
}

int main(void) {
    int i, j, n;

    while( 1 ) {
        exiba(I);
        
        printf("\n\nNova cor (0-15) ou -1 para sair? ");
        if (scanf("%d", &n) != 1 || n < 0) break;

        do {
            printf("Posicao (linha,coluna)? Ex: 4,4: ");
            if (scanf("%d,%d", &i, &j) != 2) {
                fflush(stdin);
                continue;
            }
        } while( i<0 || i>=dim || j<0 || j>=dim );

        colorir(I, i, j, n);
    }

    return 0;
}
