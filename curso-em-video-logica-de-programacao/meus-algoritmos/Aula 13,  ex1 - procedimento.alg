algoritmo "semnome"
// Função :
// Autor :
// Data : 06/05/2022
// Seção de Declarações 
var
   cont: inteiro
   nome, pesado: caractere
   p, maior: real
procedimento topo ()
inicio
      limpatela
      escreval ("======================================")
      escreval ("P E S S O A    M A I S    P E S A D A ")
      escreval ("Mair peso até agora:",maior,"kg")
      escreval ("======================================")
fimprocedimento
inicio
      topo ()
      para cont <- 1 ate 5 faca
           escreva ("Digite o nome: ")
           leia (nome)
           escreva ("Digite o peso de ", nome, ": ")
           leia (p)
           se (p>maior) entao
              maior <- p
              pesado <- nome
           fimse
           topo ()
      fimpara
      topo ()
      escreva ("A pessoa mais pesada é: ", pesado," com" ,maior,"kg")
fimalgoritmo
