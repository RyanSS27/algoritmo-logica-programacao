/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

void cr(int n) {
    if( n==0 ) return;
    
    printf("%d\n",n);
    
    cr(n-1);
}

int main(void) {
    int n;
    printf("Num? ");
    
    scanf("%d",&n);
    
    cr(n);
    return 0;
}