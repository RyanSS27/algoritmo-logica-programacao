#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b, c, delta;
	a = b = c = delta = 0;
	
	cout << "==========================================================\n";
	cout << "          CALCULO DE UMA EQUAÇÃO DE SEGUNDO GRAU\n";
	cout << "==========================================================\n";
	cout << "Digite o valor de A: ";
	cin >> a;
	cout << "Digite o valor de B: ";
	cin >> b;
	cout << "Digite o valor de C: ";
	cin >> c;

	delta = b * b - 4 * a * c;

	cout << delta; 
	return 0;
}