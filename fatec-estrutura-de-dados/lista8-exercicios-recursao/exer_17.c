/******************************************************************************
Marcos Vinícius Bispo de Oliveira | RA: 1840482513029
Ryan de Souza Silva | RA: 1840482513013
*******************************************************************************/

#include <stdio.h>
#include <string.h>

void inv(char s[], int p, int u) {
    if (p >= u) return;

    char temp = s[p];
    s[p] = s[u];
    s[u] = temp;

    inv(s, p + 1, u - 1);
}

int main() {
    char s[100];
    printf("Digite uma palavra:");
    scanf("%s", s);

    inv(s, 0, strlen(s) - 1);

    printf("%s\n", s);

    return 0;
}