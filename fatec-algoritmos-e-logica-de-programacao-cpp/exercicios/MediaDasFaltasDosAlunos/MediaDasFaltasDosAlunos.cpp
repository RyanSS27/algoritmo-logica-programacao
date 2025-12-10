#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int faltas[4][5];
	float media[5], soma;
	for (int c = 0; c < 5; c++) {
		cout << "Aluno " << c+1 << endl;
		soma = 0;
		for (int l = 0; l < 4;l++) {
			do {
				cin >> faltas[l][c];
				if (faltas[l][c] < 0)
					cout << "ERRO!";
			} while (faltas[l][c] < 0);
			soma += faltas[l][c];
		}
		media[c] = soma / 4;
	}

	for (int c = 0; c < 5; c++) {
		cout << "\n===================\n";
		cout << "      ALUNO " << c + 1;
		cout << "\n===================\n";
 		for (int l = 0; l < 4;l++) {
			cout << l + 1 << "° Bim: " << faltas[l][c] << endl;
		}
		cout << "Media de faltas: " << media[c];
	}

	soma = 0;
	for (int i = 0; i < 5; i++) {
		soma += media[i];
	}

	cout << "\n===================\n";
	cout << "Media de faltas dos alunos por bimestre: " << soma / 5;
	cout << "\n===================\n";



	return 0;
}