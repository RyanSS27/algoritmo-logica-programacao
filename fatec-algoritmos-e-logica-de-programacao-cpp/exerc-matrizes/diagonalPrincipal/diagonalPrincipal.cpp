#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a[3][3], b[3];
	for (int l = 0; l <= 2; l++) {
		for (int c = 0; c <= 2; c++) {
			do {
				cout << "Digite um inteiro > 0 para a pos ["<<l<<", "<<c<<"]: ";
				cin >> a[l][c];
			} while (a[l][c] <= 0);
		}
	}

	for (int l = 0; l <= 2; l++) {
		b[l] = a[l][2-l];
	}

	//Mostrar matriz
	cout << "========\nMATRIZ A\n========\n";
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	//Mostrar vetor 
	cout << "Diagonal principal:\n";
	for (int pos = 0; pos <= 2; pos++) {
		cout << b[pos];
	}
}