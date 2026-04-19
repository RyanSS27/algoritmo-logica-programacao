/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
// RA: 1840482513013

int main(void) {
    float p, a, imc;
    printf("Informe o peso altura?");
    scanf("%f %f", &p, &a);
    imc = p/pow(a,2);
    printf("IMC = %.2f\n", imc);
    return 0;
}