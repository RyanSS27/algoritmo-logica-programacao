#include <iostream>
#include <math.h>

using namespace std;

int mdc(int a, int b) {
	if (a % b == 0)
		return b;

	return mdc(b, a % b);
}

int main() {
	int x, y, c;
	c = 0;
	//Consistir
	do {
		cout << "Digite o 1° inteiro > 0:";
		cin >> x;

		cout << "Digite o 1° inteiro > 0:";
		cin >> y;
		if (x <= 0 || y <= 0) {
			cout << "Valor invalido! Confira os valores e tente novamente.";
		}
		else {
			c++;
		}
	} while (c == 0);

	cout << "O MDC e: " << mdc(x, y);
	return 0;
}