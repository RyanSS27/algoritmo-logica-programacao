#include <stdio.h>

int main()
{
	int i, numb, array[5];
	
	for(int i = 0; i < 5; i++)
	{
		printf("Digite o valor: ");
		scanf("%d", &array[i]);
	}
	
	printf("\nDigite o valor a ser buscado: ");
	scanf("%d", &numb);
	
	for(int i = 0; i < 5; i++)
	{
		if(array[i] == numb)
		{
			printf("Valor encontrado na posicao %d\n", i);
			break;
		}
		else
		{
			printf("Valor nao encontrado");
			
		}
	}
}