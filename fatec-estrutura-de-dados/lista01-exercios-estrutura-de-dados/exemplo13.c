#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//RA: 1840482513013

void troca(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void) {
    int x = 5, y = 10;
    printf("Antes: x=%d, y=%d\n", x, y);
    
    troca(&x, &y); // Produziu o efeito desejado
    
    printf("Depois: x=%d, y=%d\n", x, y);
    return 0;
}