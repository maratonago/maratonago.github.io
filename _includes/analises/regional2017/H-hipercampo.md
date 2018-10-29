
## H - Hipercampo

Resolva este problema:
[URI][uri-2665]{:target="_blank"}

Podemos construir um grafo direcionado onde cada vértice representa um ponto. Nesse grafo existe uma aresta ligando um vértice $$u$$ a um vértice $$v$$ se o ponto representado por $$v$$ está dentro do triangulo definido pelas âncoras ($$A$$ e $$B$$) e pelo ponto representado por $$u$$. É fácil perceber que nesse grafo não haverão ciclos, logo o problema se reduz a encontrar o [maior caminho em um DAG][longest-dag].

Uma abordagem parecida mas que dispensa a conexão com o problema do maior caminho em um DAG é ordenar os pontos de acordo com o valor da coordenada $$y$$ e usar programação dinâmica. Um ponto cujo valor de $$y$$ é maior ou igual ao valor de $$y$$ de um ponto $$i$$ não pode estar dentro to triangulo definido pelas âncoras e o ponto $$i$$. Definimos $$dp[i]$$ como a maior quantidade de pontos ligados as ancoras tal que o ponto com a maior coordenada $$y$$ é $$i$$. Para calcular $$dp[i]$$ basta olhar os pontos $$j < i$$.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 H.java %}

[uri-2665]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2665
[longest-dag]:  http://www.geeksforgeeks.org/find-longest-path-directed-acyclic-graph/


