
#include <stdio.h>
#include <math.h>
//RA: 1840482513013

int main(void) {
    long f;
    int n;
    
    printf("Numero:");
    scanf("%d", &n);
    f = 1;
    
    for(int i=2; i<=n; i++) f *= i;
    
    printf("Fatorial de '%d': %d\n", n, f);
    return 0;
}