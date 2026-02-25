algoritmo "semnome"
// Função :
// Autor :
// Data : 14/03/2022
// Seção de Declarações 
var
   m, mt, i: real
inicio
      escreval ("Qual o valor da muamba que vc comprou?")
      leia (m)
      mt <- m + ((m/100)*60)
      escreval ("O valor das suas muambas com a taxa e exportação de 60% é:", mt)
      i <- mt - m
      escreval ("O valor do imposto é:", i)
fimalgoritmo
