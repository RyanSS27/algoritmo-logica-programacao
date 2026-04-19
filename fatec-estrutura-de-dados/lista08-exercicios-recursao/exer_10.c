/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int prod(int m, int n) {
    if (n == 0) return 0;
    return m + prod(m, n - 1);
}

int main() {
    int m, n;
    printf("Digite dois valores: ");
    scanf("%d %d", &m, &n);

    printf("%d\n", prod(m, n));

    return 0;
}