
## G - Guardiões Curiosos

Resolva este problema:
[Uva][uva-12956]{:target="_blank"},
[URI][uri-1937]{:target="_blank"}

Esse problema pode ser resolvido com uma grande variedade de abordagens,
acredito que a mais simples delas precisava de um conhecimento prévio
envolvendo [Prüfer sequence][wkp-prufer]. Resumidamente, há uma bijeção
entre as sequências de $$N-2$$ elementos formadas pelos valores de $$1$$ a
$$N$$ e as árvores rotuladas de $$N$$ vértices, sendo que o grau de um
vértice é igual ao número de vezes que o rótulo daquele vértice aparece
na sequência + 1.

Sabendo disso, podemos reduzir o problema a contar o número de sequências
com $$N-2$$ elementos, formadas pelos valores de $$1$$ a $$N$$, tal que nenhum
elemento aparece mais que $$K-1$$ vezes.

Para calcular esse número podemos usar diferentes técnicas. Uma delas consiste
numa programação dinâmica simples baseada na fórmula que conta o número de
permutações distintas de uma sequência onde podem aparecer elementos repetidos:

$$
\begin{gather*}
	\frac{N!}{n_1! * n_2! * \dots * n_x!}
\end{gather*}
$$

Onde $$N$$ é o número de elementos da sequência e $$n_x$$ é a quantidade de vezes
que cada valor aparece. A idéia então é ter no estado da pd o elemento atual e a
quantidade de posições que ainda não foram preenchidas, e as transições vão variar
o número de vezes que o elemento atual aparece de $$0$$ a $$min(posições livres, K-1)$$.

Para que o resultado correto seja calculado, seja $$ocorrencias$$ o número de vezes que



Como o problema (felizmente) pede que as solução seja apresentada módulo $$10^9 + 7$$




{% gist paulocezar/4d4cc4322fca30f33289 G-guardioes-curiosos.cpp %}


Interessantes abordagens alternativas para esse problema podem ser encontradas
nos comentários [desse post][cf-solucoes](em inglês) no Codeforces.

[uva-12956]:	https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4835
[uri-1937]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1937
[wkp-prufer]:	https://en.wikipedia.org/wiki/Pr%C3%BCfer_sequence
[cf-solucoes]:	http://codeforces.com/blog/entry/20335