## I - Matriz espiral
<div id="espiral"></div>

Autor: <font color = "blue">Misael Mateus</font>

Resolva este problema: [Hackerrank][hackerrank-i]{:target="_blank"}

Este problema pode ser resolvido com uma matriz auxiliar que informa quais as posições já foram percorridas. Assim, quando encontrar uma posição já percorrida ou que leve para fora da matriz poderá mudar de direção. O sentido do percurso deverá respeitar o setindo da espiral, ou seja, direita &rarr; para baixo &rarr;  esquerda &rarr; para cima. 

Um exemplo de implementação segue abaixo:

{% gist wellvolks/ce6b17fd158911c069bb7c487ed3a377 misael_espiral.cpp %}

[hackerrank-i]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/matriz-espiral-1
