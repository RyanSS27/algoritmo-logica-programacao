algoritmo "semnome"
// Função :
// Autor :
// Data : 11/06/2022
// Seção de Declarações 
var
   matriz: vetor[1..3, 1..3] de inteiro
   pares: vetor[1..9] de inteiro
   linha, coluna: inteiro
inicio
      para linha <- 1 ate 3 faca
         para coluna <- 1 ate 3 faca
            escreva ("Digite um valor [", linha, " /", coluna, "]: ")
            leia (matriz[linha,coluna])
         fimpara
      fimpara
      
      escreval
      escreval ("MATRIZ:")
      escreval ("----------------------")
      
      para linha <- 1 ate 3 faca
         para coluna <- 1 ate 3 faca
              se (matriz[linha, coluna]%2=0) entao
                escreva ("{", matriz[linha, coluna]:2, "} ")
              senao
                   escreva (matriz[linha, coluna]:4," ")
              fimse
         fimpara
         escreval
      fimpara
fimalgoritmo
