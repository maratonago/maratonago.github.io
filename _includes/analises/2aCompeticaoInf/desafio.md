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

**Bloco 1**<br>
0 -  <span style="color:blue">00</span><br>
1 - <span style="color:blue">01</span><br>
2 - <span style="color:blue">10</span><br>
3 - <span style="color:blue">11</span><br>

**Bloco 2**<br>
4 - 1<span style="color:blue">00</span><br>
5 - 1<span style="color:blue">01</span><br>
6 - 1<span style="color:blue">10</span><br>
7 - 1<span style="color:blue">11</span><br>

**Bloco 3**<br>
8 -   10<span style="color:blue">00</span><br>
9 -   10<span style="color:blue">01</span><br>
10 - 10<span style="color:blue">10</span><br>
11 - 10<span style="color:blue">11</span><br>


Dessa forma podemos ver que sempre há a repetição dos sufixos 00</span>, <span style="color:blue">01</span>, <span style="color:blue">10</span> e <span style="color:blue">11</span>. O resto da representação é a mesma em todos os números pertencentes a esse bloco. Como a quantidade de 1's e 0's em cada posição é par, então o [XOR] de todos os números de um bloco é 0. Podemos então, dado um número N, encontrar sua posição no bloco correspondente e fazer o XOR desse valor com todos os números menores que N em tal bloco. A solução tem complexidade O(1).

Um exemplo de implementação segue abaixo:

{% gist wellvolks/a2b00cd380975c9db81246148725b282 kataki_desafio.cpp %}

[XOR]: https://hackernoon.com/xor-the-magical-bit-wise-operator-24d3012e
[hackerrank-a]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/desafio
