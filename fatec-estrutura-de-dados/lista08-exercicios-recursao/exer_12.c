/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int resto(int m, int n) {
    if (m < n) return m;
    return resto(m - n, n);
}

int main() {
    int m, n;
    printf("Digite 2 valores")
    scanf("%d %d", &m, &n);

    printf("%d\n", resto(m, n));

    return 0;
}