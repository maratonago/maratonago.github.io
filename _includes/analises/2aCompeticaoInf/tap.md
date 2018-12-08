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

Este pré-processamento deve ser feito para cada quadrante da matriz. Mas, neste primeiro momento, será explicado a ideia para o quadrante superior esquerdo. Já nos demais quadrantes o procedimento será análogo. Suponha um quadrante **Q** com **1** linha e **5** colunas. A ideia consiste em dada uma determinada posição **(1,j)**, com **j <= 5**, tal posição deve manter o maior valor entre a posição **(1,1)** e **(1, j)**. Assim, a primeira posição <b>Q<sub>11</sub></b> receberá o valor associada a mesma posição na matriz **A**. Já a próxima posição, **(1, 2)**, deverá receber o máximo entre tal posição posição associada à matriz **A** e a posição anterior, **(1, 1)**, do quadrante **Q**. Tal procedimento é ilustrado na figura abaixo. Percebe-se que dessa forma, cada posição do quadrante **Q** terá o maior valor entre tal posição e as anteriores.

Tal procedimento resolve os quadrantes com uma única linha, mas e o caso dos quadrantes em que há varias linhas, mas uma única coluna? De forma análoga, cada linha deverá manter o maior valor entre essa linha e as linhas anteriores. O procedimento é idêntico ao aplicado ao quadrante com uma única linha, como ilustrado na figura abaixo.

Certo, agora é possível responder em **O(1)** qual é o maior valor de uma determinada posição de um quadrante supeior esquerdo de dimensões **1** x **M** ou **N** x **1**. No entanto, ainda não é possível responder um quadrante com dimensões **N** x **M**. Ok, suponha então um quadrante superior esquerdo **Q** com dimensões **5** x **5**. Suponha também que a primeira linha e a primeira coluna de tal quadrante tenha passado pelos procedimentos descritos anteriormente. Ou seja, para cada posição **Q 1j** tenha o maior valor entre **Q 11** e **Q 1j**. De forma análoga, a posição **Q i,1** possua o maior valor entre **Q11** e **Qi1**. A figura abaixo ilustra tal quadrante. Note-se que a posição **Q22**, que representa o subquadrante {**Q11**,**Q22**}, contém o maior valor dentro desse subquadrante ao fazer **Q22 = max(A22,Q21,Q12)**. Da mesma forma, a posição **Q23**, que representa o subquadrante {**Q11**,**Q23**}, mantém o maior valor dentro de tal subquadrante ao fazer **Q22 = max(A23,Q22,Q13)**. Por fim, a posição **Q32** retém o maior valor ao fazer **Q32 = max(A32,Q31,Q22)**. Ao seguir esse procedimento nas demais posições do quadrante percebe-se que a posição **Q55** terá o maior valor do quadrante **Q**. Portanto, após tal procedimento, qualquer posição **Qij** terá o maior valor entre todas as posições do subquadrante {**Q11,Qij**}.

Note-se que esse último procedimento resolve o problema de encontrar o maior valor dentro de um quadrante **N** x **M**. O pré-processamento consiste em realizar tal procedimento para os demais quadrantes: superior direito, inferior esquerdo e inferior direito. A figura abaixo ilustra o sentido em que se deve computar cada quadrante.


Assim, após o pré-processamento, para qualquer posição **(i,j)** da matriz **A**, o maior valor do quadrante:
<ul>
  <li> superior esquerdo estará na posição **Qi-1, j-1**; </li>
  <li> superior direito estará na posição **Qi-1, j+1**;</li>
  <li> infeiror esquerdo estará na posição **Qi+1, j-1**;</li>
  <li> inferior direito estará na posição **Qi+1, j+1**</li>.
</lu>
    
Com esses quatro valores valores **interessantes** () é possível computar o valor **atraente** da seguinte forma:
<ul>
  <li> **atraente = max(Qi-1, j-1,Qi-1, j+1,Qi+1, j-1,Qi+1, j+1) - min(Qi-1, j-1,Qi-1, j+1,Qi+1, j-1,Qi+1, j+1) **; </li>
</ul>

Ao percorrer cada posição **(i,j)** da matriz **A**, o valor **fascinante** poderá ser comptuado da seguinte forma:

<ul>
  <li> **fascinante = max(fascinante, atraente)** </li>
</ul>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e77780e89177f930d150c26b9bb9cd21 welton_tap.cpp %}

[hackerrank-d]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/problemas-do-tap
