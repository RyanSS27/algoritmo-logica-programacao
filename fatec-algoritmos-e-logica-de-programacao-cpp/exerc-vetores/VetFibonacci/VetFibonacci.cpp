#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b, c, vet[20], pos;
	a = b = c = pos = 0;

	cout << "Digite ate qual posicao da sequencia de Fibonacci deseja mostrar: ";
	cin >> pos;
	
	a = 1;

	for (int i = 0; i < pos; i++) {
		vet[i] = a;
		c = b;
		b = a;
		a = b + c;
	}

	for (int i = 0; i < pos; i++) {
		cout << i << " pos: " << vet[i] << endl;
	}

	return 0;
}