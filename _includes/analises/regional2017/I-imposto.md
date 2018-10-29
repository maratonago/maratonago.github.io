
## I - Imposto Real

Resolva este problema:
[URI][uri-2666]{:target="_blank"}

O grafo descrito no problema se trata de uma árvore enraizada no vértice $$1$$. Assim, todo o ouro coletado nos vértices da subárvore enraizada em um vértice $$v$$, deve passar pela cidade $$v$$ antes de chegar a capital. Com isso, o fato dos cofres em cada cidade terem capacidade de armazenar todo o ouro viabiliza uma abordagem gulosa. Começando pelas folhas da árvore transferimos todo o ouro para o vértice pai, sempre levando o máximo que a carruagem suporta em uma viagem. Não é possível transferir o ouro percorrendo uma distância menor já que a única forma de levar o ouro da folha $$f$$ para a raíz passar pelo pai de $$f$$. Levar o ouro direto para a raiz ou sem avaliar as outras folhas primeiro é inútil pois a diferença caso façamos isso está apenas no fato de que dessa forma não fazemos o melhor uso da capacidade da carroça, deixando de levar mais ouro em uma única viagem (e potencialmente aumentando o número de viagens necessárias). Assim, é possível calcular a resposta com uma simples [busca em profundidade][dfs].

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 I.java %}

[uri-2666]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2666
[dfs]:          http://maratonapuc.wikidot.com/apostilas:grafos#toc4
