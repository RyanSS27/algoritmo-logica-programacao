#include <iostream>
#include <math.h>
using namespace std;

int padovan(int n) {
    if ((n == 0) || (n == 1) || (n == 2))
    {
        return 1;
    }
    else
    {
        return padovan(n - 2) + padovan(n - 3);
    }
}


int main() {
	int n;
	cout << "Digite qual posição da sequencia > 3: ";
	cin >> n;
	padovan(n);

	return 0;
}