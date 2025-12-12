algoritmo "semnome"
// Função :
// Autor :
// Data : 29/01/2022
// Seção de Declarações 
var
l1, l2, l3: real
eq, es, tri: logico
inicio
escreval ("Escreva o primeiro lado:")
leia (l1)
escreval ("Escreva o segundo lado:")
leia (l2)
escreval ("Escreva o terceiro lado:")
leia (l3)
tri <- (l1 < l2 + l3) e (l2 < l3 + l1) e (l3< l1 + l2)
eq <- (l1=l2) e (l2=l3)
es <- (l1<>l2) e (L2<>l3) e (l1<>l3)
escreval ("Isso pode ser um triangulo?", tri)
escreval ("O triangulo é ESCALENO?", es)
escreval ("O triangulo é EQUILATERO?", eq)
fimalgoritmo
