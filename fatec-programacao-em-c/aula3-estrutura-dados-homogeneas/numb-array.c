#include <stdio.h>
int main()
{
	int n, i; int numb[i];
	
	printf("Insira quantos elementos voce deseja no vetor: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		printf("Digite o valor: ");
		scanf("%d", &numb[i]); 
	}
	
	for(int i = 0; i < n; i++)
	{ 
		printf("Valor lido: %d\n", numb[i]);
	} 
	
	return 0;
}