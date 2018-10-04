## G - Subcadeia interessante
<div id="subcadeia"></div>

Autor: <font color="blue">Paulo Kataki</font>

Enunciado: [Subcadeia interessante][pg]

Resolva este problema: [Hackerrank][hackerrank-a]{:target="_blank"}

[pg]:https://github.com/maratonago/maratonago.github.io/raw/master/_includes/pdfs/primeira_comp_inf_ufg/G.pdf
[hackerrank-a]:		https://www.hackerrank.com/contests/ufg-contest-calouros/challenges/subcadeia-interessante

Para resolver esse problema basta ter algumas observações em relação à construção das cadeias interessantes. Por exemplo:

As cadeias com tamanho par, <b>aa</b>, <b>aaab</b>, <b>aaaaab</b> são cadeias interessantes. Podemos observar que todas têm pelo menos dois caracteres consecutivos iguais, no caso <b>“aa”</b>. Oberserva-se que a cadeia <b>abab</b> só poderá se tornar interessante caso se tenha <b>aaab</b>, <b>bbab</b>, <b>abaa</b> ou <b>abbb</b>, isso ocorre porque a quantidade de <b>a's</b> e <b>b’s</b> correspondem a exatamente a metade do tamanho da cadeia analisada, logo se quisermos deixar ela interessante, o número de algum desses dois caracteres deve ultrapassar a metade e então teremos pelo menos <b>1</b> caractere repetido seguido de outro.

Para as cadeias de tamanho ímpar a análise não muda muito. Por exemplo : em <b>aba</b>, <b>ababa</b>, <b>abababa</b> todas já têm pelo menos um caractere no caso o <b>“a”</b> com a quantidade superior à metade. Logo a verificação consiste em olhar se têm dois caracteres iguais a uma distância <b>2</b>.

A solução então é só varrer todos as posições da string <b>s</b> dada e verificar se há pelo menos uma posição <b>i</b> , tal que <b>s[i] = s[i+1]</b> , ou <b>s[i] = s[i+2]</b>.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/d2c412fa51b065613fff7cdc5aed969f subcadeia_kataki.cpp %}
