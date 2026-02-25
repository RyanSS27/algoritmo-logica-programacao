algoritmo "semnome"
// Função :
// Autor :
// Data : 08/06/2022
// Seção de Declarações 
var
   c, c2: inteiro
   time: vetor[1..3] de caractere
   
procedimento t
inicio
      limpatela
      escreval ("          C A M P E O N A T O          ")
      escreval ("=======================================")
fimprocedimento

inicio
      t
      para c <- 1 ate 3 faca
           escreva ("Nome do", c, "º time: ")
           leia (time[c])
      fimpara
      t
      escreval ("POSSÍVEIS CONFRONTOS:")
      escreval
      para c <- 1 ate 3 faca
           para c2 <- 1 ate 3 faca
                se (time[c]<>time[c2]) entao
                   escreval (time[c]:13, " X ", time[c2])
                fimse
           fimpara
      fimpara
fimalgoritmo
