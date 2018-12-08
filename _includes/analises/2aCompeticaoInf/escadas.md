## F - Escadas
<div id="escadas"></div>

Autor: <font color = "blue">Paulo Kataki</font>

Resolva este problema: [Hackerrank][hackerrank-f]{:target="_blank"}

Esse problema pode ser resolvido com uma técnica chamada [programação dinâmica]. A relação de recorrência é a mesma que gera a  sequência de Fibonacci porém calculado com o valor módulo <b>10<sup>9</sup> + 7</b>.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/5ae8faf219c0e539364ee43260ae22ae kataki_escadas.cpp %}

[programação dinâmica]: https://pt.wikipedia.org/wiki/Programa%C3%A7%C3%A3o_din%C3%A2mica
[hackerrank-f]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/escadas
