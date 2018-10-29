
## F - Fatorial

Resolva este problema:
[Uva][uva-12955]{:target="_blank"},
[URI][uri-1936]{:target="_blank"}

O segundo problema mais fácil da prova podia ser resolvido pelo menos de duas
maneiras. Uma delas era usando uma [estratégia gulosa][wkp-greedy]{:target="_blank"}
e outra aplicando uma solução de programação dinâmica similar a usada no clássico
problema do [coin change][coin-change].

As duas abordagens partiam de um mesmo insight inicial. O número de fatorias 
distintos que podemos usar é apenas 8, já que $$9! = 362880$$ é maior que $$10^5$$ 
(que era o maior valor de $$N$$ possível para o problema).

A partir daí um competidor que já conhecia o problema do coin change rapidamente
implementaria uma solução $$O(8*N)$$. Ou com um pouco mais de observação (ou talvez)
sorte a equipe poderia usar um algoritmo guloso, a cada passo subtraindo de $$N$$ o
maior fatorial menor que $$N$$. A prova de que essa abordagem funciona usa o fato 
que $$N! > 1! + 2! + 3! + \dots + (N-1)!$$.

Segue um exemplo de implementação usando a solução gulosa:

{% gist paulocezar/4d4cc4322fca30f33289 F-fatorial.cpp %}

[uva-12955]:    https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4834
[uri-1936]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/1936
[wkp-greedy]:   https://en.wikipedia.org/wiki/Greedy_algorithm
[coin-change]:  http://www.algorithmist.com/index.php/Coin_Change