algoritmo "semnome"
// Função :
// Autor :
// Data : 04/04/2022
// Seção de Declarações 
var
   n: caractere
   sal, d, nsal : real
inicio
      escreval ("Qual o nome do funcionário?")
      leia (n)
      escreval ("Qual o salário do funcionário ", n, "?")
      leia (sal)
      escreval ("Quantidade de dependentes?")
      leia (d)
      escolha (d)
              caso 0
                   nsal <- sal + (sal*5/100)
              caso 1,2,3
                   nsal <- sal + (sal*10/100)
              caso 4,5,6,
                   nsal <- sal + (sal*15/100)
              outrocaso
                   nsal <- sal + (sal*20/100)
      fimescolha
      escreval ("O novo salário do funcionário ", n, " é: R$", nsal)
fimalgoritmo
