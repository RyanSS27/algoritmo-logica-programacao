algoritmo "semnome"
// Função :
// Autor :
// Data : 05/05/2022
// Seção de Declarações 
var
   cont, n, soma, divis, nulos, somapar: inteiro
   media: real
inicio
      para cont <- 1 ate 5 faca
           escreva ("Informe um número: ")
           leia (n)
           soma <- soma + n
           se (n%5=0) entao
              divis <- divis + 1
           fimse
           se (n=0) entao
              nulos <- nulos + 1
           fimse
           se (n%2=0) entao
              somapar <- somapar + n
           fimse
      fimpara
      media <- soma / 5
      escreval ("--------------------")
      escreval ("A soam dos valores foi:", soma)
      escreval ("A média dos valores foi:", media)
      escreval ("São divisiveis por 5:", divis)
      escreval ("Valores nulos:", nulos)
      escreval ("A soma dos pares foi:", somapar)
fimalgoritmo
