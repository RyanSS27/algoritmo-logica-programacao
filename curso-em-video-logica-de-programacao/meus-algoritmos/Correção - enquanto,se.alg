algoritmo "semnome"
// Função :
// Autor :
// Data : 13/04/2022
// Seção de Declarações 
var
   n1, n2, r1, r2: real
   re: caractere
inicio
      escreval ("----------------------------")
      escreval ("          CORREÇÃO          ")
      escreval ("----------------------------")
      escreval ("Informe um número: ")
      leia (n1)
      escreval ("Informe outro número: ")
      leia (n2)
      escreval ("----------------------------")
      escreval ("Quanto dá a soma de",n1, " e", n2,"?")
      r1 <- n1 + n2
      leia (r2)
      se (r1=r2) entao
         escreval ("Sua resposta está CORRETA.")
      senao
            escreval ("Sua resposta esta ERRADA.")
            escreval ("Quer tentar de novo? Responda com 'sim' ou 'nao'.")
            leia (re)
            se (re="nao") entao
               escreval ("----------------------------")
               escreval ("A resposta correta é:", r1)
            fimse
      fimse
      enquanto (re="sim") faca
               escreval ("----------------------------")
               escreval ("Quanto dá a soma de",n1, " e", n2,"?")
               leia (r2)
               se (r1=r2) entao
                  escreval ("Sua resposta está CORRETA.")
                  re <- "nao"
               senao
                    escreval ("Sua resposta esta ERRADA.")
                    escreval ("Quer tentar de novo? Responda com 'sim' ou 'nao'.")
                    leia (re)
                    se (re="nao") entao
                       escreval ("----------------------------")
                       escreval ("A resposta correta é:", r1)
                    fimse
               fimse
      fimenquanto
      escreval
      escreval
      escreval
      escreval
      escreval
      escreval
      escreval
      escreval

               

fimalgoritmo
