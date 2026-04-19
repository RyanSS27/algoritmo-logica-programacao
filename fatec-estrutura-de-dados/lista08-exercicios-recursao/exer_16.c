/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int h(int n) {
    if (n == 1) return 1;
    return 2 * h(n - 1) + 1;
}

int main() {
    int n;
    printf("Digite um num: ");
    scanf("%d", &n);

    printf("%d\n", h(n));

    return 0;
}