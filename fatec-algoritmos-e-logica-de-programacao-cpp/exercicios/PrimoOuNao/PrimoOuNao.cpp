#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a[10], b[10], i = 0, teste;
	cout << "                PRIMO[1] OU NAO[0]\n";
	cout << "=================================================\n";
	//Consistir 
	do {
		cout << "Digite um numero natural para a pos " << i << ": ";
		cin >> a[i];
		teste = 0;

		//Se o numero for válido, ele acrescenta no contador e realiza o teste de primo ou não
		if (a[i] >= 0) {
			for (int j = 2; j < a[i]; j++) {
				if (a[i] % j == 0) {
					teste++;
				}
			}
			if (teste > 0) {
				b[i] = 0;
			}
			else {
				b[i] = 1;
			}
			i++;
		}
	} while (i <= 9);

	cout << "=================================================\n";
	for (int i = 0; i < 10; i++) {
		cout << "A: " << a[i] << "; B: " << b[i] << endl;
	}

	return 0;
}