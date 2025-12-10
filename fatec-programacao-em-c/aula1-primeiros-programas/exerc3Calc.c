#include <stdio.h>
#include <conio.h>
#include <math.h>
#define LIMITE 30
int main(void)
{
	float x, y;
	char o;
	printf("Expressao? ");
	scanf("%f %c %f", &x, &o, &y);
	switch (o) {
		case '+': printf("Valor = %.2f\n",x+y); break;
		case '-': printf("Valor = %.2f\n",x-y); break;
		case '*': printf("Valor = %.2f\n",x*y); break;
		case '/': printf("Valor = %.2f\n",x/y); break;
		default : printf("Operador invalido: %c\n", o);
	}
	
return 0;

}