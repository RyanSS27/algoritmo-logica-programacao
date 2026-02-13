#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x, *ptrx, **pptrx;
    x = 0;
    printf("\n Valor de x = %d ", x);
    printf("\n Endereco de x: %x ", &x);
    //Atribuindo os enderecos para os ponteiros
    ptrx = &x;     //ptrx aponta para x
    pptrx = &ptrx; //pptrx aponta p/ ptrx
    
    *ptrx = *ptrx + 10;
    
    printf("\n Valor de x = %d ", x);
    printf("\n Endereco apontando por ptrx: %x ", ptrx);
    printf("\n Valor da variavel x que esta sendo apontada por ptrx: %d ", *ptrx);
    printf("\n Endereco de memoria da variavel ptrx: %x ", &ptrx);
    
    **pptrx = **pptrx + 10;
    
    printf("\n Valor de x = %d ", x);
    printf("\n Endereco apontando por **pptrx: %x ", pptrx);
    printf("\n Valor da variavel para a qual pptrx faz referencia: %d ", **pptrx);
    printf("\n Endereco de memoria da variavel **pptrx: %x ", &pptrx);
    
    return 0;
}