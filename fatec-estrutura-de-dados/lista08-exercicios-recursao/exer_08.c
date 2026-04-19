/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>

void hanoi(int n, char o, char a, char d) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", o, d);
        return;
    }

    hanoi(n - 1, o, d, a);
    printf("Mover disco %d de %c para %c\n", n, o, d);
    hanoi(n - 1, a, o, d);
}

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}