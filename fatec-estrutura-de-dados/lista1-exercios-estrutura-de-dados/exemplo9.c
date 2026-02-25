#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//RA: 1840482513013

int main(void) {
    char s[256];
    printf("Senha? ");
    scanf("%s", s);
    if (strcmp(s, "abracadabra") == 0) puts("Ok!");
    else puts("Senha invalida!");
    return 0;
}