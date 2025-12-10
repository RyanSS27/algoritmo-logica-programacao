#include <stdio.h>
#include <conio.h>
#include <math.h>
#define LIMITE 30
main()
{
	float peso, altura, imc;
	printf("\n Qual o seu peso e altura? ");
	scanf("%f%f",&peso,&altura);
	imc = peso/pow(altura,2);
	printf("\n Seu i.m.c e %.1f",imc);
	if(imc <= LIMITE)
		printf("\n Voce nao eh gordo");
	else
		printf("\n Voce eh gigante irao!");
	getch();
}