algoritmo "semnome"
// Função :
// Autor :
// Data : 10/04/2023
// Seção de Declarações 
var
   i: inteiro
inicio
      escreval ("Digite a sua idade:")
      leia (i)
      escreval ("===================")
      
      se i < 16 entao
         escreval ("(Não votante)")
      senao
           se (i >= 16) e (i < 18) ou (i > 65) entao
              escreval ("(Eleitor facultativo)")
           senao
                escreval ("(Eleitor votante)")
           fimse
      fimse
fimalgoritmo
