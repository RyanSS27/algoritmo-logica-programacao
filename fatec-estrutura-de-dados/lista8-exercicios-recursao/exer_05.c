/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <stdio.h>

void cp(int n) {
    if( n==0 ) return;
    
    cp(n-1);
    
    printf("%d\n",n);
}

int main(void) {
    int n;
    printf("Num? ");
    
    scanf("%d",&n);
    
    cp(n);
    return 0;
}