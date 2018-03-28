<div id="facil-rujia-liu">
</div>
## F - Problema Fácil de Rujia Liu?

Resolva este problema:
[URI][uri-1424]{:target="_blank"}

São dados um vetor de n números inteiros e m consultas. Cada consulta consiste em
perguntar: qual o índice (1-indexado) da k-ésima aparição do valor v no vetor dado?
Podemos utilizar um map com o valor v como chave e um [vector](http://www.cplusplus.com/reference/vector/vector/)
com as posições em que o valor v aparece. Mas como os valores vão ser no máximo 1.000.000,
podemos utilizar um array no lugar do map, já que conseguimos alocar 1.000.000
posições em um array tranquilamente.
Sabendo disso, basta a cada entrada de um número inserir a posição indexada de 1
no vector que está na posição v do nosso array, sendo v o valor do número inserido.
Para responder consultas, é preciso verificar se o vector com as posições de um
valor v tem tamanho menor que o k requerido, o que indica que não existe a k-ésima aparição.
Nesse caso, imprimos 0 em uma linha. Caso contrário, basta imprimir a posição k-1
do vector, já que k começa em 1 e os índices de um vector começam de 0.

Um exemplo de implementação segue abaixo:

{% gist leandrovianna/9c081b55bcdeb16e38e03c73427d961f facil-rujia-liu.cpp %}

[uri-1424]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1424

