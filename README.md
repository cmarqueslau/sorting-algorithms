# Algoritmos de ordenação
O objetivo é implementar, comparar e analisar o desempenho dos algoritmos de ordenação SelectionSort (padrão e otimizado), BubbleSort (padrão e otimizado), InsertionSort e dos algoritmos de busca sequencial e binária, utilizando dados armazenados em arquivos binários.

## Como compilar
Para compilar, abra a pasta ./output e execute o arquivo ./main.

## SelectionSort
Esse método de ordenação, busca no vetor o menor elemento e coloca ele no começo. Na primeira iteração, o menor é colocado no começo, na segunda, a iteração começa do segundo elemento e o menor é colocado na segunda posição, e assim por diante.
### SelectionSortOp
Esse método de ordenação é a adição de uma verificação se ao passar por todos os elementos do vetor, existe algum fora de ordem.
Para isso, basta verificar se o atual é menor que o próximo.

## BubbleSort
Tal algoritmo pega o primeiro elemento, confere se é maior que o segundo e troca se for maior. Depois ele compara o segundo com o terceiro e assim por diante até o final do vetor.
Na segunda iteração, o último elemento será o maior e realiza-se de novo o mesmo processo para que o penúltimo seja o segundo maior. O número de iterações é igual a n (tamanho do vetor).
### BubbleSortOP
Para tornar o BubbleSort otimizado, adiciona-se uma flag que verifica se ao passar por todos os elementos foi feita alguma troca, caso não existam trocas, o vetor já está ordenado e o código é encerrado.

## InsertionSort
Esse método considera o primeiro elemento como ordenado e compara se o segundo é menor que ele, se for, o segundo é posicionado na frente. Com o terceiro elemento, verifica-se se ele é menor que o segundo, se sim, o segundo elemento se torna o terceiro. Caso o terceiro também seja maior que o primeiro, o primeiro se torna segundo e o terceiro é colocado na frente. Se o terceiro fosse maior que o primeiro, ele seria colocado no lugar do segundo. E assim sucessivamente.

