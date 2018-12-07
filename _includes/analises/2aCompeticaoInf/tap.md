## D - Problemas do TAP
<div id="tap"></div>

Autor: <font color = "blue">Welton Cardoso</font>

Resolva este problema: [Hackerrank][hackerrank-d]{:target="_blank"}

Este problema é uma variação do problema de escalonamento de tarefas. Podemos olhar as posições das extremidades de uma viga como um intervalo (x,y). Após isso, realiza-se um ordenação destes intervalos de acordo com o valor de x e depois deve-se utilizar um algoritmo guloso para agrupar os intervalos que têm uma intersecção e adicioná-los na resposta.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/6302ed204b8c34be6989a801c80eb96b welton_tap.cpp %}

[hackerrank-d]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/problemas-do-tap
