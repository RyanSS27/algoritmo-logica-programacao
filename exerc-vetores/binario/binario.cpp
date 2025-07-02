#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n = 0, nBinario[15], cont = 0;

	cout << "        CONVERSOR BINÁRIO        \n";
	cout << "=================================\n";

	do {
		cout << "Digite um inteiro positivo: ";
		cin >> n;
	} while (n < 0);
	
	while (n > 1) {
		nBinario[cont] = n % 2;
		n /= 2;
		cont++;
	}
	
	nBinario[cont] = n;
	cout << "Numero convertido: ";

	for (int cont2 = cont; cont2 >= 0; cont2--) {
		cout << nBinario[cont2];
	}

	return 0;
}