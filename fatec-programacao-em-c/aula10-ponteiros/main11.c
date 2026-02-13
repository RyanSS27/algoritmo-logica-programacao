#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
    float vetor[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    float *p1, *p2;
    p1 = &vetor[2]; /* endereco do terceiro elemento?? */
    p2 = vetor; /* endereco do primeiro elemento */
    printf("Diferenca entre ponteiros %d\n", p1-p2);
    return 0;
}

