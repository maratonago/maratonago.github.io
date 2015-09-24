
## A - Mania de Par

Resolva este problema no:
[Uva][uva-12950]{:target="_blank"},
[URI][uri-1931]{:target="_blank"}

Se não fosse a restrição de pagar um número par de pedágios, esse problema
seria facilmente resolvido usando o [algoritmo de Dijkstra][wkp-dijkstra]{:target="_blank"}.
Bem, acontece que mesmo com essa restrição adicional o problema continua
sendo facilmente resolvido com o algoritmo de dijstra. :) Para isso basta
transformar cada vértice $$u$$ do grafo em dois, $$u_0$$ e $$u_1$$, o vértice
$$u_0$$ representa chegar ao vértice $$u$$ pagando um número par de pedágios
e o vértice $$u_1$$ representa chegar ao vértice $$u$$ pagando uma quantidade
de pedágios impar. Cada aresta $$C1 - C2$$ do grafo original dá origem a duas
arestas $$C1_0 - C2_1$$ e $$C1_1 - C2_0$$ no nosso novo grafo. E agora para
encontrar a resposta basta calcular o menor caminho entre os vértices $$1_0$$
e $$C_0$$.


Um exemplo de implementação segue abaixo:

{% gist paulocezar/4d4cc4322fca30f33289 A-mania-de-par.cpp %}


[uva-12950]:	https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4829
[uri-1931]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1931
[wkp-dijkstra]:	https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm