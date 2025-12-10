#include <stdio.h>

int main(void) {
	int n;
	printf("Digite numero: ");
	scanf("%d", &n);
	switch (n) {
		case 1: putchar('A'); break;
		case 3: putchar('B'); 
		case 4: putchar('C'); break;
		default: putchar('*');
		case 5: putchar('D');
	}
	
	puts(",");
	return 0;
}