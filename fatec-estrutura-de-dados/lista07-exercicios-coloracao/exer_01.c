#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define dim 9

/*
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*/

int I[dim][dim] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 4, 4, 4, 4, 4, 0, 1},
    {1, 0, 4, 15, 15, 15, 4, 0, 1},
    {1, 0, 4, 15, 14, 15, 4, 0, 1},
    {1, 0, 4, 15, 15, 15, 4, 0, 1},
    {1, 0, 4, 4, 4, 4, 4, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1}
};

void exiba(int I[dim][dim]) {
    for(int i = -1; i < dim; i++) {
        _textcolor(8); 
        for(int j = -1; j < dim; j++) {
            if( i < 0 && j < 0 ) {
                printf("  ");
            }
            else if( i < 0 ) {
                printf("%2d", j);
            }
            else if( j < 0 ) {
                printf("\n%2d", i);
            }
            else {
                _textcolor(I[i][j]);
                printf("%c%c", 219, 219);
            }
        }
    }
    _textcolor(8);
    printf("\n");
}

int main(void) {

    exiba(I);
    puts("\n");
    return 0;
}
