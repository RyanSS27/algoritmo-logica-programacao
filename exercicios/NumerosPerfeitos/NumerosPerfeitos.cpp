#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int cont, soma, num;
	soma = num = 0; 
	cont = 1;
	

	while (num <= 0) {
		cout << "Digite um inteiro positivo: ";
		cin >> num;
	}

	while (cont < num) {
		if (num % cont == 0) {
			soma += cont;
		}
		cont++;
	}

	
	if (soma == num) {
		cout << "Perfeito.";
	} else {
		cout << "Imperfeito";
	}

	return 0;
}