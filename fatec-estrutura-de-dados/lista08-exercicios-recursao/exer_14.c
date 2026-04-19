/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int sd(int n) {
    if (n == 0) return 0;
    return (n % 10) + sd(n / 10);
}

int main() {
    int n;
    printf("Digite um numero: ")
    scanf("%d", &n);

    printf("%d\n", sd(n));

    return 0;
}