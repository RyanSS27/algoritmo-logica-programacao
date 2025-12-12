#include <stdio.h>

int main() {
	
	int n, i;
	
	printf("Insira quantos elementos voce deseja no vetor: ");
	scanf("%d", &n);
	
	char fruta[n][50];	
	
	getchar();
	
	for(int i = 0; i < n; i++)
	{
		printf("Digite o nome da fruta: ");
		fgets(fruta[i], 50, stdin);	
	}
	//Definicao e inicializacao de um array de strings

	//Exibicao dos elementos do array
		
	for( int i = 0; i < 3; i++){
		printf("frutas[%d] = %s\n", i, fruta[i]);
	}
	return 0;
}