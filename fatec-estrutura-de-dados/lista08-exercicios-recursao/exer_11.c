/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int quoc(int m, int n) {
    if (m < n) return 0;
    return 1 + quoc(m - n, n);
}

int main() {
    int m, n;
    printf("Digite 2 valores");
    scanf("%d %d", &m, &n);

    printf("%d\n", quoc(m, n));

    return 0;
}