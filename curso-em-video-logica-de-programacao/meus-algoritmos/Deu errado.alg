algoritmo "semnome"
// Função :
// Autor :
// Data : 03/05/2022
// Seção de Declarações 
var
   cont, divis, nul: inteiro
    n, soma, somapar, media: real
inicio

      para cont <- 1 ate 5 faca
           escreval ("Informe um valor: ")
           leia (n)
           soma <- soma + n
           se (n%5=0) entao
              divis <- divis + 1
           fimse
           se (n=0) entao
              nul <- nul + 1
           fimse
           se (n%2=0) entao
              somapar <- somapar + n
           fimse
      fimpara
      media <- soma/5
      escreval ("--------------------")
      escreval ("A soma dos valores foi:", soma)
      escreval ("A média dos valores foi:", media)
      escreval ("São divisíveis por 5:", divis)
      escreval ("São nulos:", nul)
      escreval ("A soma dos pares foi:", somapar)
fimalgoritmo
