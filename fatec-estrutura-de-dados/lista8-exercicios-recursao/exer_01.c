/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int fat(int n) {

    if( n==0 ) return 1;
    return n*fat(n-1);

}

int main(void) {
    int n;
    printf("Num? ");
    
    scanf("%d",&n);
    
    printf("Fat = %d\n",fat(n));
    return 0;
}