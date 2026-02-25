#include <stdio.h>
#include <stdlib.h>

//RA: 1840482513013

int main(void) {
    int n, s = 0;

    printf("Numero: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    while (n > 0) {
        s += n % 10;
        n /= 10;
    }

    printf("Soma dos digitos é %d\n", s);
    return 0;
}