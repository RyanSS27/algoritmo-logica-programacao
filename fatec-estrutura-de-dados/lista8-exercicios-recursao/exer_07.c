/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

void binario(int n) {
    if( n<2 ) printf("%d",n);
    else {
        binario(n/2);
        
        printf("%d",n%2);
    }
}

int main(void) {
    int n;
    printf("Num? ");
    
    scanf("%d",&n);
    
    binario(n);
    return 0;
}