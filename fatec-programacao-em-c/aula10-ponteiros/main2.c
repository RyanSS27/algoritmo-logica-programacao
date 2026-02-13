#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int valor = 27;

    int *ptr;

    ptr = &valor;
    //atribuindo o endereço da variável valor ao ponteiro

    printf("\n Utilizando ponteiros ");
    printf("\n Conteudo da variavel valor: %d ", valor);
    printf("\n Endereco da variavel valor: %x ", &valor);
    printf("\n Conteudo da variavel ponteiro ptr: %x ", ptr);

    getch();
    return(0);
}