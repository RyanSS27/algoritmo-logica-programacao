algoritmo "Banner"
// Função :
// Autor :
// Data : 16/05/2022
// Seção de Declarações 
var
   pedido: caractere
   soun: caractere
procedimento banner
inicio
escreval (" ,ggggggggggg,                                                                                              ")
escreval ("dP'''88''''''Y8,                                                                           I8               ")
escreval ("Yb,  88      `8b                                                                           I8               ")
escreval (" `'  88      ,8P                                                                        88888888            ")
escreval ("     88aaaad8P'                                                                            I8               ")
escreval ("     88''''Y8ba    ,ggggg,    ,ggg,,ggg,,ggg,          gg,gggg,     ,gggggg,    ,gggg,gg   I8     ,ggggg,   ")
escreval ("     88      `8b  dP'  'Y8ggg,8' '8P' '8P' '8,         I8P'  'Yb    dP''''8I   dP'  'Y8I   I8    dP'  'Y8ggg")
escreval ("     88      ,8P i8'    ,8I  I8   8I   8I   8I         I8'    ,8i  ,8'    8I  i8'    ,8I  ,I8,  i8'    ,8I  ")
escreval ("     88_____,d8',d8,   ,d8' ,dP   8I   8I   Yb,       ,I8 _  ,d8' ,dP     Y8,,d8,   ,d8b,,d88b,,d8,   ,d8'  ")
escreval ("    88888888P'  P'Y8888P'   8P'   8I   8I   `Y8      P I8 YY88888P8P      `Y8P'Y8888P'`Y88P''Y8P'Y8888P'    ")
escreval ("                                                       I8                                                   ")
escreval ("                                                       I8                                                   ")
escreval ("                                                       I8                                                   ")
escreval ("                                                       I8                                                   ")
escreval ("                                                       I8                                                   ")
escreval ("                                                       I8                                                   ")
fimprocedimento
procedimento menu
var
   opcao: inteiro
inicio
      limpatela
      banner
      escreval ("===========================================================================================================")
      escreval
      escreval ("=====================================")
      escreval ("|    M E N U   D E   O P Ç Õ E S    |")
      escreval ("=====================================")
      escreval ("| [1] Petiscos.                     |")
      escreval ("| [2] Bebidas.                      |")
      escreval ("| [3] Pratos quentes.               |")
      escreval ("| [4] Lanches.                      |")
      escreval ("| [5] Sair.                         |")
      escreval ("-------------------------------------")
      escreva ("Informe sua escolha: ")
      leia (opcao)
      escolha (opcao)
              caso 1
                   petiscos
              caso 2
                   bebidas
              caso 3
                   pratos_quentes
              caso 4
                   lanches
              caso 5
                   fimalgoritmo
      fimescolha
fimprocedimento

procedimento petiscos
var
   petiscos: inteiro
inicio
      limpatela
      banner
      escreval ("===========================================================================================================")
      escreval
      escreval ("-------------------------------------")
      escreval ("           P E T I S C O S           ")
      escreval ("-------------------------------------")
      escreval ("[1] Batata frita com chedar e bacom.")
      escreval ("[2] Calabresa com cebola.")
      escreval ("[3] Anéis de cebola.")
      escreval ("[4] Voltar.")
      escreval ("-------------------------------------")
      leia (petiscos)
      escolha (petiscos)
              caso 1
                  pedido <- "Batata frita com chedar e bacom."
              caso 2
                  pedido <- "Calabresa com cebola."
              caso 3
                  pedido <- "Anéis de cebola."
              caso 4
                  tudodenovo
      fimescolha
fimprocedimento

procedimento bebidas
var
   bebida: inteiro
inicio
      limpatela
      banner
      escreval ("===========================================================================================================")
      escreval
      escreval ("-------------------------------------")
      escreval ("            B E B I D A S            ")
      escreval ("-------------------------------------")
      escreval ("[1] Água.")
      escreval ("[2] Suco de laranja.")
      escreval ("[3] Coca Cola.")
      escreval ("[4] Voltar.")
      escreval ("-------------------------------------")
      leia (bebida)
      escolha (bebida)
              caso 1
                  pedido <- "Água."
              caso 2
                  pedido <- "Suco de laranja."
              caso 3
                  pedido <- "Coca Cola."
              caso 4
                  tudodenovo
      fimescolha
fimprocedimento

procedimento pratos_quentes
var
   prato: inteiro
inicio
      limpatela
      banner
      escreval ("===========================================================================================================")
      escreval
      escreval ("-------------------------------------")
      escreval ("     P R A T O S   Q U E N T E S     ")
      escreval ("-------------------------------------")
      escreval ("[1] Feijoada.")
      escreval ("[2] Bife com batata frita.")
      escreval ("[3] Frango com salada.")
      escreval ("[4] Voltar.")
      escreval ("-------------------------------------")
      leia (prato)
      escolha (prato)
              caso 1
                  pedido <- "Feijoada."
              caso 2
                  pedido <- "Bife com batata frita."
              caso 3
                  pedido <- "Frango com salada."
              caso 4
                  tudodenovo
      fimescolha
fimprocedimento

procedimento lanches
var
   lanche: inteiro
inicio
      limpatela
      banner
      escreval ("===========================================================================================================")
      escreval
      escreval ("-------------------------------------")
      escreval ("            L A N C H E S            ")
      escreval ("-------------------------------------")
      escreval ("| [1] X-Salada.                     |")
      escreval ("| [2] X-Burguer.                    |")
      escreval ("| [3] Hot-Dog.                      |")
      escreval ("| [4] Voltar.                       |")
      escreval ("-------------------------------------")
      leia (lanche)
      escolha (lanche)
              caso 1
                  pedido <- "X-Salada."
              caso 2
                  pedido <- "X-Burguer."
              caso 3
                  pedido <- "Hot-Dog."
              caso 4
                  tudodenovo
      fimescolha
fimprocedimento

procedimento tudodenovo
inicio
      repita
            menu
            limpatela
            se (soun="s") entao
               banner
               escreval ("===========================================================================================================")
               escreval
               escreval ("SEU PEDIDO FOI: ", pedido)
            senao
                 banner
                 escreval ("===========================================================================================================")
                 escreval
                 escreval ("SEU PEDIDO FOI: ", pedido)
                 escreval ("Confirma o pedido? [S/N]")
                 leia (soun)
            fimse
      ate (soun="s")
fimprocedimento
inicio
      //chama o procedimento que pinta o banner.
      banner
      //parte do menu de opções.
      tudodenovo
fimalgoritmo
