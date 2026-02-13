#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    int inteiro = 4;
    int *inteiro_ptr;
    *inteiro_ptr = 4;

    printf("Valor da variavel 'inteiro': %d\n", inteiro);
    printf("Endereco da variavel 'inteiro': %d\n", &inteiro);
    printf("Valor armazenado no ponteiro 'inteiro_ptr': %d\n", inteiro_ptr);
    printf("Endereco armazenado no ponteiro 'inteiro_ptr': %d\n", &inteiro_ptr);

    printf("\nApos o uso dos ponteiros, vamos aponta-los para NULL\\n\n");
    
    inteiro = 0;
    inteiro_ptr = 0;
    
    printf("Endereco armazenado no ponteiro 'inteiro': %d\n", inteiro);
    printf("Endereco armazenado no ponteiro 'inteiro_ptr': %d\n", inteiro_ptr);

    return 0;
}