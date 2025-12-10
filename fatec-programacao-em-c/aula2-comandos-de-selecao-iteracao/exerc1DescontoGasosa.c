#include <stdio.h>
#include <stdlib.h>


// Um posto de combustível dá um desconte de 5% para abastecimentos com valores superiores a
// 100 reais. Dados os número de litros abastecidos e o preço do litro de combustível, informe
// o valor total do desconto (apenas se houver um desconto), o valor total e liquido

	int main () {
    float litro = 0, preco = 0, desc = 0, teto = 0;
    char resp[2];

    printf("Quer executar? [s/n]");
    scanf("%s", resp);

    while (resp[0] == 's') { 
        printf("==========================================\n");
        printf("Informe o valor do desconto em %% e o teto: ");
        scanf("%f %f", &desc, &teto);
        desc = desc / 100;  // Convertendo o desconto para percentual
        printf("==========================================\n");

        printf("Informe a qtd de litros e o preco: ");
        scanf("%f %f", &litro, &preco);

        printf("==========================================\n");
        printf("               NOTA FISCAL\n");
        printf("==========================================\n");

        printf("Litros: %.2f", litro);
        printf("\nValor do litro: %.2f", preco);
        printf("\nValor bruto: %.2f", preco * litro);

        if (litro * preco > teto) {
            printf("\nTem desconto de no valor de: %.2f", (preco * litro) * desc);
            printf("\nValor liquido: %.2f", (preco * litro) - ((preco * litro) * desc));
        } else {
            printf("\nValor liquido: %.2f", preco * litro);
        }
        printf("\n==========================================\n");

        printf("Quer executar? [s/n] ");
        scanf("%s", resp);  
    }

    return 0;
}
	
	
	
