#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int cont, a, b, c, posicao;
	cont = a = b = c = posicao = 0;
	cout << "==========================================================\n";
	cout << "                        FIBONACCI\n";
	cout << "==========================================================\n";
	cout << "Voce queseja executar a sequencia ate qual posicao? ";
	cin >> posicao;
	a = 1;
	if (posicao>0 ){
		while (cont < posicao) {
			cout << cont << " repeticao: " << a << "\n";
			c = b;
			b = a;
			a = c + b;
			cont++;
		}
	}
	else {
		cout << "==========================================================\n";
		cout << "Como a posicao digitada foi < 0, consideraremos até 5:\n";
		for (cont = 1, a = 1; cont <= 5; cont++) {
			cout << cont << " repeticao: " << a << "\n";
			b = c;
			c = a;
			a = b + c;
		}
	}

	return 0;
}