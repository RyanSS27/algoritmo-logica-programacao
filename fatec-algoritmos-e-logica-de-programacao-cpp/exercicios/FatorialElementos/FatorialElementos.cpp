#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a[5], b[5], cont = 0, fat = 0, cont2;
	cout << "      FATORIAL DE CADA NUMERO DE UM VETOR      \n";
	cout << "===============================================\n";
	do {
		cout << "Digite um inteiro maior que 0 para ocupar a posicao " << cont << ": ";
		cin >> a[cont];
		if (a[cont] > 0) {
			cont++;
		}
		else {
			cout << "Erro. Digite apenas numeros inteiro maiores que 0, seu burro.\n";
		}
	} while (cont <= 4);

	cout << "===============================================\n";

	for (int cont = 0; cont <= 4; cont++) {
		fat = a[cont];
		cont2 = fat;
		while (cont2 > 1) {
			cont2--;
			fat *= cont2;
		}
		b[cont] = fat;

		cout << "Posicao " << cont << ": A = " << a[cont] << "; B = " << b[cont] << endl;
	}
}