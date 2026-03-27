/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

int qd(int n) {
    if (n == 0) return 0;
    return 1 + qd(n / 2);
}

int main() {
    int n;
    printf("Digite um num: ");
    scanf("%d", &n);

    printf("%d\n", qd(n));

    return 0;
}