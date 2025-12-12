algoritmo "semnome"
// Função :
// Autor :
// Data : 20/04/2022
// Seção de Declarações 
var
   sn, soun: caractere
   qn, rep, sla, n, neg: inteiro
inicio
      escreval ("-----------------------------------------------------------------")
      escreval ("                 ANALIZADOR DE NÚMEROS NEGATIVOS                 ")
      escreval ("-----------------------------------------------------------------")
      escreval
      escreval ("Vc sabe quantos números que analisar? [s/n]")
      leia (sn)
      sla <- 1
      rep <- 0
      se (sn="s") entao
         escreval ("Quantos números vc quer analisar?")
         leia (qn)
         escreval ("-----------------------------------------------------------------")
         repita
               escreva ("Nº",sla, ":")
               leia (n)
               se (n<0) entao
                  neg <- neg + 1
               fimse
                  sla <- sla + 1
                  rep <- rep + 1
         ate (rep>=qn)
      senao
           escreval ("------------------------------------------------------------")
           repita
                 escreva ("Nº",sla, ":")
                 leia (n)
                 se (n<0) entao
                    neg <- neg + 1
                 fimse
                      sla <- sla + 1
                      rep <- rep + 1
                 escreval ("Vc quer continuar [s/n]")
                 leia (soun)
           ate (soun="n")
      fimse
      sla <- sla - 1
      escreval ("-----------------------------------------------------------------")
      escreval ("Foram analisados",sla, " números. Deles,",neg," sao negativos.")
      escreval
      escreval
      escreval
fimalgoritmo
