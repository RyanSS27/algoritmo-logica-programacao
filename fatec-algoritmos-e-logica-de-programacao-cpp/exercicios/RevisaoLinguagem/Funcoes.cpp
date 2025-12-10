#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

//FORMAS DE DECLARAR CONSTANTES
#define pi 3.14;
constexpr auto pi2 = 3.14;

//DECLARAR UMA AÇÃO QUE SE REPETE VÁRIAS CEZES DURANTE O CÓDIGO
#define msgErro cout<< "Erro. Reinicie o codigo e tente novamente.";


//"void" é usada para funções que não retornam valores
void tabuada(int a /*tem que declarar a variavel aqui paizão*/) {
	int cont;
	for (cont = 1; cont < 11; cont++) {
		cout << a << " x " << cont << " = " << a * cont << endl;
	}
}

int quadradoDeN(int a) {
	return pow(a, 2);
}

int main() {
	int n = 0;
	n = 5;
	cout << "==================================\n";
	cout << "      TOMANDO 5 COMO EXEMPLO\n";
	cout << "==================================\n";

	//FUNÇÃO SEM RETURN
	tabuada(n);

	//FUNÇÃO COM RETURN
	//Declara uma variavel para receber o retorno da função
	int varRetorno = 0;
	varRetorno = quadradoDeN(n);
	cout << "==================================\n";
	cout << "O quadrado de " << n << " eh:" << varRetorno << endl;
	cout << "==================================\n";
	msgErro;
}
