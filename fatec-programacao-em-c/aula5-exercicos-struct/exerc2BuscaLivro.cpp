#include <stdio.h>
#include <string.h>
struct livro {
	char titulo[50];
	char autor[50];
	int ano;
	};

int main() {
	int engual = 5, pos = 0, teste = 0;
	char book[50];
	struct livro biblioteca[5];
	
	printf("=== CADASTRO DE LIVROS ===\n");
	for(int c = 0; c < 5; c++) {
		printf("Digite o titulo do livro:");
		fgets(biblioteca[c].titulo, 50, stdin);
		printf("Digite o autor:");
		fgets(biblioteca[c].autor, 50, stdin);
		printf("Digite o ano:");
		scanf("%d", &biblioteca[c].ano);
		getchar();
		printf("==========================\n");
	}
	
	printf("Qual livro deseja?");
	fgets(book, 50, stdin);
	printf("======== BUSCA ========");
	for(int c = 0; c < 5; c++) {
		engual = strcmp(book, biblioteca[c].titulo);
		if (engual == 0) {
			teste = 1;
			printf("======== Livro %d ========", c);
			printf("\nTitulo: %s", biblioteca[c].titulo);
			printf("\nTitulo: %s", biblioteca[c].autor);
			printf("\nTitulo: %d", biblioteca[c].ano);
		}
	}
	
	if (teste == 0) {
		printf("Não temos o livro");
	}
}