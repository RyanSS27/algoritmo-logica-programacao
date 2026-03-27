/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/
#include <stdio.h>

int q(int n) {
    if (n == 0) return 0;
    return q(n - 1) + (2 * n - 1);
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d\n", q(n));

    return 0;
}