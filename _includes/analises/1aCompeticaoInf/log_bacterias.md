## E - Log Bactérias
<div id="log"></div>

Autor: <font color = "blue">Misael Mateus</font>

Enunciado: [Log Bactérias][pe]

Resolva este problema: [Hackerrank][hackerrank-a]{:target="_blank"}

[pe]: https://github.com/maratonago/maratonago.github.io/raw/master/_includes/pdfs/primeira_comp_inf_ufg/E.pdf
[hackerrank-a]:	https://www.hackerrank.com/contests/ufg-contest-calouros/challenges/log-bacterias

Multiplique todos os elementos dos dois arrays e verifique qual gera o maior resultado. Como o valor dos elementos pode ser até <b>10<sup>8</sup></b>, o produto dos elementos do mesmo array pode ultrapassar o valor suportado pelo <b>inteiro</b> de 32 bits. Para lidar com isso podemos usar o logaritmo.

Se <b>a > b</b>, onde <b>a, b</b> são positivos, então <b>log(a) > log(b)</b>.

Usando as propriedades do logaritmo, temos que: <b>log(a&#8226;b) = log(a)+log(b)</b>

Então, basta somar o logaritmo de cada elemento do array e verificar qual dos dois arrays tem um resultado maior.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/ee56c94858477b2b5810d82373d8d41a log_bacterias_misael.cpp %}
