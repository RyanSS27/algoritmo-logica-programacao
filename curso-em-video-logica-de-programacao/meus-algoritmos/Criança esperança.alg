algoritmo "CRIANÇA ESPERANÇA"
// Função :
// Autor :
// Data : 04/04/2022
// Seção de Declarações 
var
   d, valor: real
inicio
      escreval ("-------------------------")
      escreval ("    CRIANÇA ESPERANÇA    ")
      escreval ("-------------------------")
      escreval
      escreval ("[1] Para doar R$10.")
      escreval ("[2] Para doar R$25.")
      escreval ("[3] Para doar R$50.")
      escreval ("[4] Para doar outros valores.")
      escreval ("[5] Cancelar.")
      leia (d)
      escolha (d)
              caso 1
                   valor <-  10
              caso 2
                   valor <-  25
              caso 3
                   valor <-  50
              caso 4
                   escreva ("Digite qualquer valor: R$ ")
                   leia (valor)
              caso 5
                   valor <- 0
      fimescolha
      escreval ("-------------------------")
      se (valor=0) entao
         escreval ("VOCÊ NÃO DOOU NADA. PRECISA DE AJUDA?")
      senao
           escreval ("VOCÊ DOOU:", valor)
           escreval ("OBRIDO PELA SUA DOAÇÃO!")
      fimse
      
      
fimalgoritmo
