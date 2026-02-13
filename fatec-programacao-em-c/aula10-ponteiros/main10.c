#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
    int vetor[] = { 10, 20, 30, 40, 50 };
    int *p1, *p2;
    int i = 100;
    
    p1 = &vetor[2];
    printf("%d\n", *p1);
    
    p2 = &i;
    printf("%d\n", *p2);
    
    p2 = p1;
    printf("%d\n", *p2);
    
    return 0;
}

