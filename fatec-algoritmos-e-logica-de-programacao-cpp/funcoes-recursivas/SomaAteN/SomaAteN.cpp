#include <iostream>
#include <math.h>
using namespace std;

int soma(int a) {
	for (int c = a - 1; c > 0; c--) {
		a += c;
	}
	return a * -1;
}

int main() {
	int n;
	cout << "Diga o numero papai: ";
	cin >> n;
	cout << soma(n);
}