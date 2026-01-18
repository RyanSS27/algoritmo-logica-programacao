#include <stdio.h> 

struct banda {
	char nome[50];
	int integrantes;
	int pos;
};

int main() {
	int pos = 0;
	
	struct banda rank[3];
	
	for (int c = 0; c < 3; c++) {
		printf("Nome banda: ");
		fgets(rank[c].nome, 50, stdin);
		printf("Qtde integrantes: ");
		scanf("%d", &rank[c].integrantes);
		printf("Posição no ranking: ");
		scanf("%d", &rank[c].pos);
		getchar();
	}
	
	printf("Qual banda quer consultar?");
	scanf("%d", &pos);
	
	if (pos > 3 || pos < 1) {
		printf("Essa posicao não consta no rank, burro!");
	} else {
		for (int c = 0; c < 3; c++) {
		if (pos == rank[c].pos) {
			printf("Nome: %s", rank[c].nome);
			printf("Qtde de integrantes: %d", rank[c].integrantes);
			printf("Posição no rank: %d", pos);	
			break;	
		}
	}
	}
	
}