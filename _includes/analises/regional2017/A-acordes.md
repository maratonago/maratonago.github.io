
## A - Acordes intergaláticos

Resolva este problema:
[URI][uri-2658]{:target="_blank"}

Podemos usar uma [segment tree com lazy propagation][tutorial-segtree] para simular de forma eficiente cada acorde. Armazenamos em cada nó a frequência que cada nota no intervalo representado pelo nó. Podemos então, a cada acorde tocado, computar qual a nota mais frequente e atualizar o entervalo em seguida. Um problema similar apareceu na regional de 2011: [Homem, Elefante e Rato][uri-1477-homem].

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 A.java %}


[uri-2658]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2658
[tutorial-segtree]: https://www.hackerearth.com/practice/notes/segment-tree-and-lazy-propagation/
[uri-1477-homem]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1477
