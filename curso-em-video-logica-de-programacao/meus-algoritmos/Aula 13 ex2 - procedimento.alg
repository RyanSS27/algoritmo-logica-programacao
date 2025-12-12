algoritmo "semnome"
// Função :
// Autor :
// Data : 07/05/2022
// Seção de Declarações 
var
   n: inteiro
procedimento ImpouPar(x: inteiro)
inicio
      escreval ("O valor de X é:", x)
      escreval ("O valor de N é:", n)
      se (x%2=0) entao
         escreval ("Seu número é PAR.")
      senao
           escreval ("Seu número é IMPAR.")
      fimse
fimprocedimento
inicio
      escreval ("Informe um número: ")
      leia (n)
      escreval ("------------------------")
      ImpouPar (n)

fimalgoritmo
