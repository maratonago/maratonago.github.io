## E - Brincando com múltiplos
<div id="brincando"></div>

Autor: <font color = "blue">Paulo Kataki</font>

Resolva este problema: [Hackerrank][hackerrank-e]{:target="_blank"}

Esse problema é uma aplicação direta do princípio da inclusão e exclusão. Ou seja, podemos interpretar cada conjunto como sendo os múltiplos de cada um dos n valores dados como entrada. Também sabemos que a quantidade de múltiplos de um determinado número x num intervalo de 1 até m é floor(m/x). Para gerar todas as combinações dos números podemos utilizar bitmasks. 

Um exemplo de implementação segue abaixo:

{% gist wellvolks/95fbda2ac98c5f21a0e58d4c00658079 kataki_brincando.cpp %}

[hackerrank-e]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/brincando-com-multiplos
