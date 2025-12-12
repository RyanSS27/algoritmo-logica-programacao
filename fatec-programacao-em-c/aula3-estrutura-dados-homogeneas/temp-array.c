#include <stdio.h>

int main()
{
	int n, i;
	
	
	printf("Insira quantos elementos voce deseja no vetor: ");
	scanf("%d", &n);
	
	float temp[n];
	
	
	for(int i = 0; i < n; i++)
	{
		printf("Digite a temperatura: ");
		scanf("%f", &temp[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("Temperaturas: %.1f\n", temp[i]);
	}
	return 0;
} 	