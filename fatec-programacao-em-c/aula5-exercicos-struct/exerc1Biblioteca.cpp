#include <stdio.h>
struct livro {
	char titulo[50];
	char autor[50];
	int ano;
	};

int main() {
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
	
	for(int c = 0; c < 5; c++) {
		printf("======== Livro %d ========", c);
		printf("\nTitulo: %s", biblioteca[c].titulo);
		printf("\nTitulo: %s", biblioteca[c].autor);
		printf("\nTitulo: %d", biblioteca[c].ano);
	}
}