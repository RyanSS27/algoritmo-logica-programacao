#include <iostream>
#include <math.h>

using namespace std;

static int fat(int a) {
	for (int i = a - 1; i > 1; i--) {
		a *= i;
	}
	return a;
}

int main() {
	int a[2][2], b[2][2], l = 0, c = 0;
	cout << "=============================================================";
	cout << "\n   Preenche matriz A e guarda os fatoriais em uma matriz B   \n";
	cout << "=============================================================\n";
	for (int l = 0; l < 2; l++) {
		for (int c = 0; c < 2; c++) {
			do {
				cout << "Digite um número inteiro positivo para a posicao ["
					<< l << ", " << c << "]: ";
				cin >> a[l][c];
				if (a[l][c] <= 0)
					cout << "ERRO! Confira o valor e tente novamente.\n";
			} while (a[l][c] <= 0);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			b[i][j] = fat(a[i][j]);
		}
	}
	cout << "============\n| MATRIZ A |\n============\n";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << "============\n| MATRIZ B |\n============\n";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}