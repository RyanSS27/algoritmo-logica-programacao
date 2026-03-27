/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int pal(char s[], int p, int u) {
    if (p >= u) return 1;

    if (s[p] != s[u]) return 0;

    return pal(s, p + 1, u - 1);
}

int main() {
    char s[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", s);

    if (pal(s, 0, strlen(s) - 1))
        printf("Palindromo\n");
    else
        printf("Nao eh palindromo\n");

    return 0;
}