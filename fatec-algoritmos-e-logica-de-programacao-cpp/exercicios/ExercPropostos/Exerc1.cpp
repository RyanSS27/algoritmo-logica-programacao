#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;
int calc(int x) {
	return pow(x, 2) - 3 * x + 5;
}
int main() {
	int a,resp = 0, cont = 1;
	string confirmacao;

	cout << "=======================================================\n";
	cout << "            RETORNO DA FUNCAO X^2 - 3X + 5            ";
	cout << "\n=======================================================\n";

	while (cont == 1){
		cout << "Deseja executar o algoritmo? [S ou sim / N ou nao]:\n";
		cin >> confirmacao;
		transform(confirmacao.begin(), confirmacao.end(), confirmacao.begin(), ::toupper);
		if (confirmacao == "S" || confirmacao == "SIM") {
			cout << "=======================================================\n";
			do {
				cout << "Digite um número inteiro maior que 0:";
				cin >> a;
			} while (a <= 0);
			
			resp = calc(a);
			cout << resp << endl;
			cout << "=======================================================\n";

		}
		else if (confirmacao == "N" || confirmacao == "NAO") {
			cont = 0;
		}
		else {
			cout << "[Resposta invalida]\n";
		}
		

		
	}

	return 0;
}