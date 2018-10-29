<div id="dama">

</div>

## I - Dama

Resolva este problema:
[URI][uri-1087]{:target="_blank"}

<p align="justify">
O problema lhe fornece a posição de uma rainha e pede a quantidade mínima de movimentos necessários para chegar em outra posição do tabuleiro 8x8. A primeira vista parece um problema de grafos, podemos aplicar uma <a href="http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph">busca em largura</a> para descobrir a quantidade mínima de movimentos. Essa abordagem é aceita, mas se paramos para analisar o problema em si, percebemos que existem apenas três casos: I) a posição deseja é a mesma que a posição atual; II) a posição deseja é alcançável com um único movimento; III) a rainha consegue cobrir todas posições do tabuleiro com apenas dois movimentos, logo se a posição não é alcançável com 0 e nem com 1 movimento então, com certeza, é com 2 movimentos.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e0afd8b7e49ad0f67d0b9c4ca315c7fb dama.cpp %}

[uri-1087]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1087
