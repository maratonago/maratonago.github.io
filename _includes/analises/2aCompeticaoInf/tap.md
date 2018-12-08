## D - Problemas do TAP
<div id="tap"></div>

Autor: <font color = "blue">Welton Cardoso</font>

Resolva este problema: [Hackerrank][hackerrank-d]{:target="_blank"}

O problema pede que dada uma matriz **A**, com dimensões **N** x **M**, onde pode-se escolher qualquer posição **(i, j)** de **A**, **1 < i < N** e **1 < j < M**, e eliminar todos os elementos da linha **i** e da coluna **j**. Ou seja, a matriz será dividida
em quatro quadrantes. O enunciado segue com algumas definições. O maior valor em um quadrante é definido
como **interessante**. A diferença entre o maior e o menor dos quatro valores interessantes é definido
como **atraente**. Por fim, o valor **fascinante** da matriz é o maior valor atraente dentre todas as
possíveis divisões da matriz em quadrantes.

Uma primeira tentativa de solução seria percorrer toda a matriz e simular as remoções da linha **i** e coluna **j**, bem como descobrir o maior valor de cada quadrante resultante da divisão da matriz **A**. Tal solução tem complexidade <b>O(N &middot; M &middot; (N + M))</b>. Ou seja, supondo que **N = M**, a complexiade seria <b>O(N<sup>3</sup>) = O(1000<sup>3</sup>) = O(10<sup>9</sup>)</b> o que não seria aceito no tempo. Percebe-se que uma solução <b>O(N<sup>2</sup>) = O(10<sup>6</sup>)</b> seria aceita tranquilamente. No entanto, o processo para descobrir o maior valor de um quadrante teria que ser em <b>O(1)</b>. &#9835; *Para a nossa alegria* &#9835; é possível computar o maior valor de um quadrante em <b>O(1)</b> através de um pré-processamento. 


A primeira  solução mais simples possível para esse problema seria percorrer 

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e77780e89177f930d150c26b9bb9cd21 welton_tap.cpp %}

[hackerrank-d]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/problemas-do-tap
