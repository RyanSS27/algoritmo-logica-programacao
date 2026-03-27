/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

float h(int n) {
    if( n==1 ) return 1;
    
    return h(n-1) + 1.0/n;
}

int main(void) {
    int n;
    printf("Num? ");
    
    scanf("%d",&n);
    
    printf("Harmonica = %.2f\n",h(n));
    return 0;
}