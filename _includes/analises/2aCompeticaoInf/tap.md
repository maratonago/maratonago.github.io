## D - Problemas do TAP
<div id="tap"></div>

Autor: <font color = "blue">Welton Cardoso</font>

Resolva este problema: [Hackerrank][hackerrank-d]{:target="_blank"}

O problema pede que dada uma matriz **A**, com dimensões **N** x **M**, onde pode-se escolher qualquer posição **(i, j)** de **A**, **1 < i < N** e **1 < j < M**, e eliminar todos os elementos da linha **i** e da coluna **j**. Ou seja, a matriz será dividida em quatro quadrantes. O enunciado segue com algumas definições. O maior valor em um quadrante é definido
como **interessante**. A diferença entre o maior e o menor dos quatro valores interessantes é definido
como **atraente**. Por fim, o valor **fascinante** da matriz é o maior valor atraente dentre todas as
possíveis divisões da matriz em quadrantes.

Uma primeira tentativa de solução seria percorrer toda a matriz e simular as remoções da linha **i** e coluna **j**, bem como descobrir o maior valor de cada quadrante resultante da divisão da matriz **A**. Tal solução tem complexidade <b>O(N &middot; M &middot; (N + M))</b>. Ou seja, supondo que **N = M**, a complexiade seria <b>O(N<sup>3</sup>) = O(1000<sup>3</sup>) = O(10<sup>9</sup>)</b> o que não seria aceito no tempo. Percebe-se que uma solução <b>O(N<sup>2</sup>) = O(10<sup>6</sup>)</b> seria aceita tranquilamente. No entanto, o processo para descobrir o maior valor de um quadrante teria que ser em <b>O(1)</b>. &#9835; *Para a nossa alegria* &#9835; é possível computar o maior valor de um quadrante em <b>O(1)</b> através de um pré-processamento. 

Este pré-processamento deve ser feito para cada quadrante da matriz. Mas, neste primeiro momento, será explicado a ideia para o quadrante superior esquerdo. Já nos demais quadrantes o procedimento será análogo. Suponha um quadrante **Q** com **1** linha e **5** colunas. A ideia consiste em dada uma determinada posição <b>Q<sub>[1,j]</sub></b>, com <b>j &#10877; 5</b>, tal posição deverá manter o maior valor entre as posições <b>Q<sub>[1,1]</sub></b> e <b>Q<sub>[1,j]</sub></b>. Assim, a primeira posição <b>Q<sub>[1,1]</sub></b> receberá o valor associado a mesma posição na matriz **A**. Já a próxima posição, <b>Q<sub>[1,2]</sub></b>, deverá receber o maior valor entre tal posição posição associada à matriz **A** e a posição anterior, <b>Q<sub>[1,1]<sub></b>. Tal procedimento é ilustrado na figura abaixo. Assim, cada posição no quadrante **Q** terá o maior valor entre tal posição e as anteriores.

![d1](/_assets/images/tap1.png){: .center-image }

Tal procedimento resolve os quadrantes com uma única linha, mas e o caso dos quadrantes em que há varias linhas e uma única coluna? De forma análoga, cada linha deverá manter o maior valor entre essa linha e as linhas anteriores. O procedimento é idêntico ao aplicado ao quadrante com uma única linha, como ilustrado na figura abaixo.

![d2](/_assets/images/tap2.png){: .center-image }

Agora é possível responder em **O(1)** qual é o maior valor de uma determinada posição de um quadrante supeior esquerdo de dimensões **1** x **M** ou **N** x **1**. No entanto, ainda não é possível responder a mesma questão para um quadrante com dimensões **N** x **M**. 

Suponha um quadrante superior esquerdo **Q** com dimensões **5** x **5**. Suponha também que a primeira linha e a primeira coluna de tal quadrante tenha passado pelos procedimentos descritos anteriormente. Ou seja, para cada posição <b>Q<sub>[1,j]</sub></b> tenha o maior valor entre <b>Q<sub>[1,1]</sub></b> e <b>Q<sub>[1,j]</sub></b>. De forma análoga, a posição <b>Q<sub>[i,1]</sub></b> possua o maior valor entre <b>Q<sub>[1,1]</sub></b> e <b>Q<sub>[i,1]</sub></b>. A figura abaixo ilustra tal quadrante.

![d3](/_assets/images/tap3.png){: .center-image }

Note-se que a posição <b>Q<sub>[2,2]</sub></b>, que representa o subquadrante {<b>Q<sub>[1,1]</sub></b>,<b>Q<sub>[2,2]</sub></b>}, contém o maior valor dentro desse subquadrante ao fazer <b>Q<sub>[2,2]</sub> = max(A<sub>[2,2]</sub>,Q<sub>[2,1]</sub>,Q<sub>[1,2]</sub>)</b>. Da mesma forma, a posição <b>Q<sub>[2,3]</sub></b>, que representa o subquadrante {<b>Q<sub>[1,1]</sub></b>,<b>Q<sub>[2,3]</sub></b>}, mantém o maior valor dentro de tal subquadrante ao fazer <b>Q<sub>[2,3]</sub> = max(A<sub>[2,3]</sub>,Q<sub>[2,2]</sub>,Q<sub>[1,3]</sub>)</b>. Por fim, a posição <b>Q<sub>[3,2]</sub></b> retém o maior valor ao fazer <b>Q<sub>[3,2]</sub> = max(A<sub>[3,2]</sub>,Q<sub>[3,1]</sub>,Q<sub>[2,2]</sub>)</b>. Ao seguir tal procedimento nas demais posições do quadrante percebe-se que a posição <b>Q<sub>[5,5]</sub></b> terá o maior valor do quadrante **Q**. Portanto, após tal procedimento, qualquer posição <b>Q<sub>[i,j]</sub></b> terá o maior valor dentre todas as posições do subquadrante {<b>Q<sub>[1,1]</sub>,Q<sub>[i,j]</sub></b>}.

Esse último procedimento resolve o problema de encontrar o maior valor dentro de um quadrante **N** x **M**. O pré-processamento consiste em realizar tal procedimento para os demais quadrantes: *superior direito*, *inferior esquerdo* e *inferior direito*. A figura abaixo ilustra o sentido em que se deve computar cada quadrante.

![d1](/_assets/images/mat_seta.png){: .center-image }

Assim, após o pré-processamento, para qualquer posição <b>A<sub>[i,j]</sub></b>, o maior valor do quadrante:
<ul>
  <li> superior esquerdo estará na posição <b>Q<sub>[i-1,j-1]</sub></b>; </li>
  <li> superior direito estará na posição <b>Q<sub>[i-1,j+1]</sub></b>;</li>
  <li> infeiror esquerdo estará na posição <b>Q<sub>[i+1,j-1]</sub></b>;</li>
  <li> inferior direito estará na posição <b>Q<sub>[i+1,j+1]</sub></b></li>.
</ul>

Como mostrado na figura abaixo:

![d1](/_assets/images/mat_pos.png){: .center-image }
    
Com esses quatro valores **interessantes** (<b>Q<sub>[i-1,j-1]</sub></b>, <b>Q<sub>[i-1,j+1]</sub></b>, <b>Q<sub>[i+1,j-1]</sub></b> e <b>Q<sub>[i+1,j+1]</sub></b>) é possível computar o valor <b>atraente<sub>[i,j]</sub></b> da seguinte forma:
<ul>
  <li> <b>atraente<sub>[i,j]</sub> = max(<b>Q<sub>[i-1,j-1]</sub></b>, <b>Q<sub>[i-1,j+1]</sub></b>, <b>Q<sub>[i+1,j-1]</sub></b>, <b>Q<sub>[i+1,j+1]</sub></b>) - min(<b>Q<sub>[i-1,j-1]</sub></b>, <b>Q<sub>[i-1,j+1]</sub></b>, <b>Q<sub>[i+1,j-1]</sub></b> e <b>Q<sub>[i+1,j+1]</sub></b>)</b>.</li>
</ul>

Ao percorrer cada posição <b>A<sub>[i,j]</sub></b>, o valor **fascinante** poderá ser comptuado da seguinte forma:

<ul>
  <li> <b>fascinante = max(fascinante, atraente<sub>[i,j]</sub>)</b>. </li>
</ul>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e77780e89177f930d150c26b9bb9cd21 welton_tap.cpp %}

[hackerrank-d]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/problemas-do-tap
