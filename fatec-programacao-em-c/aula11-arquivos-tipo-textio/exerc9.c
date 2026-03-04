#include <stdio.h>
 
int main(void)
{
    char url[] = "notas.txt";
    float nota;
    float media = 0.0;
    FILE *arq;
 
    arq = fopen(url, "w");
 
    if (arq == NULL)
    {
        printf("Erro. Nao foi possivel abrir o arquivo \"%s\".\n", url);
    }
    else
    {
        printf("Nota de Matematica: ");
        scanf("%f", &nota);
        fprintf(arq, "Matematica: %.2f\n", nota);
        media += nota;
 
        printf("Nota de Fisica: ");
        scanf("%f", &nota);
        fprintf(arq, "Fisica: %.2f\n", nota);
        media += nota;
 
        printf("Nota de Quimica: ");
        scanf("%f", &nota);
        fprintf(arq, "Quimica: %.2f\n", nota);
        media += nota;
 
        media = media / 3;
 
        printf("Media final: %.2f\n", media);
        fprintf(arq, "Media final: %.2f\n", media);
 
        fclose(arq);
    }
 
    return 0;
}