/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int par(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    return par(n - 2);
}

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    if (par(n))
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}