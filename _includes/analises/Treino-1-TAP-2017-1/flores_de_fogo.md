<div id="flores">

</div>

## K - Flores de Fogo

Resolva este problema:
[URI][uri-1039]{:target="_blank"}

<p align="justify">
Dados dois círculos, um desenhado por um ambicioso caçador de flores de fogo e outro representando a área da flor, sua tarefa é determinar se o caçador morre ou fica rico com sua conquista. O caçador morre caso o círculo desenhado por ele não cubra o círculo da flor de fogo.  Seja <b>d</b> a distância Euclidiana entre os centros dos dois círculos, o caçador irá morrer se o raio do círculo desenhado por ele é menor que <b>d</b>, ou seja, se <b>d > r1</b>. Caso contrário, o círculo desenhado alcança a flor de fogo, mas o mesmo deve englobar o círculo da mesma. Portanto, se <b>d + r2 > r1</b> então o círculo desenhado pelo caçador não engloba o círculo da flor, por consequência ele é morto. Caso contrário ele fica rico.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e47f1a0a5c9ef92e56bf4b24800e5572 flores_de_fogo.cpp %}


[uri-1039]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1039
