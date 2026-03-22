algoritmo "semnome"
// Função :
// Autor :
// Data : 12/04/2022
// Seção de Declarações 
var
   valor, salto, contador : inteiro
inicio
      escreva ("Até onde quer que eu conte?")
      leia (valor)
      escreva ("Qual o valor do salto?")
      leia (salto)
      escreval ("------------------------------")
      contador <- 0
      enquanto (contador<=valor) faca
               escreval (contador)
               contador <- contador + salto
      fimenquanto
      escreval ("------------------------------")
      escreval ("TERMINEI A CONTAGEM.")
fimalgoritmo
