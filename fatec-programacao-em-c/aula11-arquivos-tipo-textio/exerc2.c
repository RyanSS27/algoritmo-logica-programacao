#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main() {
	FILE *fptr;
	char ch;
	
	fptr = fopen("arquivo2.txt", "w");
	
	while((ch=getche()) != '\r')
		fputc(ch, fptr);
		
	fclose(fptr);
	return 0;
}