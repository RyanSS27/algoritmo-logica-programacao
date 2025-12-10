#include <iostream>;
#include <math.h>
//Crie uma matriz A e B de 10x10 e armazene na matriz B, o dobro dos elementos da Matriz A.
//Crie um vetor e armazene nele a soma dos elementos de cada linha de B

using namespace std;

int main() {
	int MatA[10][10], MatB[10][10], vet[10], n = 0;

	for (int l = 0; l < 10; l++) {
		for (int c = 0; c < 10; c++) {
			MatA[l][c] = n;
			n++;
			//Deveria-se usar um outro FOR para fazer isso, mas eu fiquei com preguiça
			MatB[l][c] = MatA[l][c] * 2;
		}
	}

	cout << "   MATRIZ A\n";
	cout << "==============\n";

	for (int l = 0; l < 10; l++) {
		for (int c = 0; c < 10; c++) {
			cout << MatA[l][c];
			
		}
		cout << endl;
	}

	cout << "==============\n";
	cout << "   MATRIZ B\n";
	cout << "==============\n";
	for (int l = 0; l < 10; l++) {
		n = 0;

		for (int c = 0; c < 10; c++) {
			cout << MatB[l][c];
			n += MatB[l][c];
		}
		cout << endl;
		vet[l] = n;
	}

	cout << "==============\n";
	cout << "     VETOR    \n";
	cout << "==============\n";
	for (int l = 0; l < 10; l++) {
		cout << vet[l] << ", ";
	}

	return 0;
}