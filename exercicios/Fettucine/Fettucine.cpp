#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, c, posicao;


    // Entrada dos dois primeiros termos
    cout << "Digite o primeiro termo da sequência: ";
    cin >> b;
    cout << "Digite o segundo termo da sequência: ";
    cin >> c;

    // Entrada da posição desejada
    cout << "Digite a posição da sequência que deseja exibir: ";
    cin >> posicao;

    // Exibe os dois primeiros termos
    if (posicao >= 1) {
        cout << "Termo 1: " << b << endl;
    }
    if (posicao >= 2) {
        cout << "Termo 2: " << c << endl;
    }

    int contador = 3;
    while (contador <= posicao) {
        // Alterna entre soma e subtração com base na paridade do contador
        if (contador % 2 == 1) { // ímpar → soma
            a = c + b;
        }
        else { // par → subtração
            a = c - b;
        }

        cout << "Termo " << contador << ": " << a << endl;

        // Atualiza os dois últimos termos
        b = c;
        c = a;

        contador++;
    }
}