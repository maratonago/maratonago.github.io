## A - Desafio
<div id="desafio"></div>

Autor: <font color = "blue">Paulo Kataki</font>

Resolva este problema: [Hackerrank][hackerrank-a]{:target="_blank"}

Esse problema parece ser bastante difícil, mas na verdade é bem simples. É necessário somente uma observação em relação a representação binária dos números. Por exemplo:

0 -   00<br>
1 -   01<br>
2 -   10<br>
3 -   11<br>
4 -   100<br>
5 -   101<br>
6 -   110<br>
7 -   111<br>
8 -   1000<br>
9 -   1001<br>
10 - 1010<br>
11 - 1011<br>

Podemos repartir esses números em blocos de tamanho 4:

Bloco 1<br>
0 - **00**<br>
1 - **01**<br>
2 - **10**<br>
3 - **11**<br>

Bloco 2<br>
4 - 1**00**<br>
5 - 1**01**<br>
6 - 1**10**<br>
7 - 1**11**<br>

Bloco 3<br>
8 -   10**00**<br>
9 -   10**01**<br>
10 - 10**10**<br>
11 - 10**11**<br>


Dessa forma podemos ver que sempre há a repetição dos sufixos **00**, **01**, **10** e **11**. O resto da representação é a mesma em todos os números pertencentes a esse bloco. Como a quantidade de 1's e 0's em cada posição é par, então o [XOR] de todos os números de um bloco é 0. Podemos então, dado um número N, encontrar sua posição no bloco correspondente e fazer o XOR desse valor com todos os números menores que N em tal bloco. A solução tem complexidade O(1).

Um exemplo de implementação segue abaixo:

{% gist wellvolks/a2b00cd380975c9db81246148725b282 kataki_desafio.cpp %}

[XOR]: https://hackernoon.com/xor-the-magical-bit-wise-operator-24d3012e
[hackerrank-a]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/desafio
