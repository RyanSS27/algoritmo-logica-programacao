#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
}Data;

typedef struct {
	int cod;
	char nome [30];
	float salario;
	Data admissao;
} Funcionario; //nome do tipo

int main(void) {
	Funcionario f;
	printf("Codigo ...:");
	scanf("%d", &f.cod);
	fflush(stdin);
	printf("Nome:");
	gets(f.nome);
	fflush(stdin);
	printf("Salario:");
	scanf("%f",&f.salario);
	fflush(stdin);
	printf("Data de admissao no formato dd/mm/aaaa:");
	scanf("%d %*c %d %*c %d", &f.admissao.dia, &f.admissao.mes, &f.admissao.ano);
	printf("FUNCIONARIO\n");
	printf("Codido \t Nome \t Salario \t Data de admissao \n");
	printf("%d \t %10s \t %.f2 \t%02d/%02d/%d", f.cod, f.nome, f.salario, f.admissao.dia, f.admissao.mes, f.admissao.ano);
	return 0;
}

