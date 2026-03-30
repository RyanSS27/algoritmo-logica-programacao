algoritmo "Conte Pares"
// Função :
// Autor :
// Data : 04/06/2022
// Seção de Declarações 
var
   cont, c, pares, impares: inteiro
   n, QualPar: vetor[1..5] de inteiro
inicio
      para cont <- 1 ate 5 passo 1 faca
           escreval ("Informe o", cont, "º número.")
           leia (n[cont])
           se (n[cont]%2=0) entao
              pares <- pares + 1
              c <- c + 1
              QualPar[c] <- n[cont]
           senao
                impares <- impares + 1
           fimse
      fimpara
      escreval ("--------------------------------------")
      escreval ("Dos 5 números apresentados,", impares, " são impares. Já", pares, " são pares, sendo eles:")
      para cont <- 1 ate 5 passo 1 faca
           se (QualPar[cont]<>0) entao
              //Essa parte é para escrever o número par com ',' ou '.' caso seja o ultimo.
              se (cont=pares) entao
                 escreval (QualPar[cont], ".")
              senao
                   escreva (QualPar[cont], ", ")
              fimse
           fimse
      fimpara
      escreval
      escreval
      escreval
      escreval
      escreval
      escreval
      escreval
fimalgoritmo
