algoritmo "semnome"
// Função :
// Autor :
// Data : 27/04/2022
// Seção de Declarações 
var
   esco,cont: inteiro
   soun: caractere
inicio
      repita
      soun <- "s"
      escreval ("==========================")
      escreval ("|          MENU          |")
      escreval ("==========================")
      escreval ("| [1] De 1 a 10.         |")
      escreval ("| [2] De 10 a 1.         |")
      escreval ("| [3] Sair.              |")
      escreval ("==========================")
      leia (esco)
      escreval ("==========================")
      escolha (esco)
             caso 1
                  cont <- 1
                  repita
                        escreva (cont,"...")
                        cont <- cont + 1
                  ate (cont>10)
             caso 2
                  cont <- 10
                  repita
                        escreva (cont,"...")
                        cont <- cont - 1
                  ate (cont<1)
             caso 3
                  soun <- "n"
      fimescolha
      escreval
      ate (soun="n")
fimalgoritmo
