
#include <stdio.h>
#include <math.h>
//RA: 1840482513013

#include <stdio.h>
    int main(void) {
    int placa;
    printf("Digite a placa:");
    scanf("%d",&placa);
    switch( placa%10 ) {
        case 1: case 2: puts("Segunda-feira"); break;
        case 3: case 4: puts("Terca-feira"); break;
        case 5: case 6: puts("Quarta-feira"); break;
        case 7: case 8: puts("Quinta-feira"); break;
        default: puts("Sexta-feira");
    }
    return 0;
}