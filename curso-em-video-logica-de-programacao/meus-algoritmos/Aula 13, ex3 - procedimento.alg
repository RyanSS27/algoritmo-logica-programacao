algoritmo "semnome"
// Função :
// Autor :
// Data : 12/05/2022
// Seção de Declarações 
var
   cont, n1, n2, soma: inteiro
procedimento seqfibonacci (var a, b: inteiro)
var
   soma: inteiro
inicio
      soma <- a + b
      escreva (soma,"...")
      a <- b
      b <- soma
fimprocedimento
inicio
      escreval ("SEQUÊNCIA DE FIBONACCI")
      n2 <- 1
      para cont <- 1 ate 10 faca
           seqfibonacci (n1,n2)
      fimpara
fimalgoritmo
