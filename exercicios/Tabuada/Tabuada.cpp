#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a[10], tab[10][10], i = 0;

	do {
		cout << "Digite um numero entre 1 e 10 para a posicao [" << i << "]: ";
		cin >> a[i];
		if (a[i] <= 0 || a[i] > 10) {
			cout << "ERRO!\n";
		}
		else {
			i++;
		}
	} while (i < 10);

	for (int c = 0; c < 10; c++) {
		for (int l = 0; l < 10; l++) {
			tab[l][c] = a[l] * c;
		}
	}

	cout << "Vetor: ";
	for (int l = 0; l < 10; l++) {
		cout << a[l] << " ";
	}

	cout << "\nMatriz:\n";
	for (int l = 0; l < 10; l++) {
		for (int c = 0; c < 10; c++) {
			if (tab[l][c] < 10) {
				cout << a[l] << " x " << c << " = " << tab[l][c] << "    ";
			}
			else {
				cout << a[l] << " x " << c << " = " << tab[l][c] << "  ";
			}
		}
		cout << endl;
	}

	return 0;
}