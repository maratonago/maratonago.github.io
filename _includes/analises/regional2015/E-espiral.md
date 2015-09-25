
## E - Espiral

Resolva este problema:
[Uva][uva-12954]{:target="_blank"},
[URI][uri-1935]{:target="_blank"}

Um problema bem interessante que pode ser resolvido com um algumas observações
simples. Inicialmente, como os limites são bem grandes, já podemos eliminar 
a idéia de simular a o processo de colocar os feijões no grid. Mas ainda na
linha da simulação podemos tentar fazer com que ela seja mais eficiente.
Podemos pensar em cada camada mais externa do grid como uma "casca", tal que
quando retiramos essas "cascas" obtemos um grid com duas linhas e duas colunas
a menos. Já que o processo de colocar os feijões no grid vai preenchendo
primeiramente essas cascas, se houvesse um modo de descobrir rapidamente
quantas cascas serão completamente preenchidas já poderiamos eliminar boa parte
da simulação começando em um ponto mais avançado do processo.

Bem, acontece que descobrir quantas celulas foram preenchidas não é uma
tarefa muito complexa. Em um grid $$NxN$$, o nro de celulas na primeira casca
é $$4*(N-2) + 4$$. Para chegar nesse valor ignoramos as celulas dos cantos, assim
temos 4 segmentos idênticos com $$N-2$$ células mais as 4 células dos cantos.
Para a segunda casca, podemos considerar apenas o grid interno, que tem dimensões
$$(N-2)x(N-2)$$, e usar a mesma lógica da primeira casca. Generalizando essa idéia
conseguimos mostrar que o número de células na i-ésima casca é $$4*(N-2*i) + 4$$.

Com essa equação em mãos podemos calcular o número de celulas presentes em $$X$$
cascas como sendo:

$$
\begin{gather*}
 	\sum_{i=1}^{X} 4*(N-2*i) + 4 \\
 	= \sum_{i=1}^{X} 4*N-8*i+4 \\
 	= \sum_{i=1}^{X} 4*N + \sum_{i=1}^{X} 4 - 8 * \sum_{i=1}^{X} i \\
 	= X*4*N + X*4 - 8*(\frac{X*(X+1)}{2}) \\
 	= 4 * X *(N - X)
\end{gather*}
$$

Bem, então se queremos saber o número $$X$$ de cascas completas, como
queremos que $$4 * X *(N - X) \leq B$$ podemos resolver essa inequação.
Ou, ser uma pouco menos matemáticos e usar [busca binária][wkp-bs]{:target="_blank"}
para descobrir o valor. :)

Sabendo o número de $$X$$ de cascas que serão completamente preenchidas
podemos começar a colocar os feijões restantes a partir da posição $$(X+1,X)$$.

Como no pior caso nenhuma casca foi completamente preenchida podemos ter
ainda um número na casa de $$2^30$$ feijões para colocar, então essa parte também
deve ser feita de uma maneira esperta. Mas essa etapa é bem mais simples, podemos
preencher um segmento todo de uma vez já que estamos partindo do início do mesmo,
sendo assim no pior caso vamos gastar apenas 4 operações para colocar os feijões
restantes.

Segue abaixo uma implementação dessa idéia usando busca binária para descobrir o
número de cascas completamente preenchidas:

{% gist paulocezar/4d4cc4322fca30f33289 E-espiral.cpp %}

[uva-12954]:	https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4833
[uri-1935]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1935
[wkp-bs]:		https://en.wikipedia.org/wiki/Binary_search_algorithm