## H - Terrenos
<div id="terrenos"></div>

Autor: <font color = "blue">Leandro Vianna</font>

Resolva este problema: [Hackerrank][hackerrank-h]{:target="_blank"}

Basta verificar se **N** é um quadrado perfeito, ou seja, se existe um número **x** tal que <b>x &middot; x = N</b>, e se **x** é um número primo. Existem várias abordagens. Uma delas é percorrer através de um loop os valores de **2** até <b>&radic;<span style="text-decoration: overline">N</span></b> com o intuito de encontrar um divisor de <b>N</b>, ou seja, um candidato para o **x** mencionado anteriormente. Verifique se <b>x &middot; x = N</b>, caso contrário imprima "**N**". Então verifique se **x** é um número primo, o que pode ser feito percorrendo de **2** até  <b>&radic;<span style="text-decoration: overline">x</span></b>, se algum destes números dividir **x**, então imprima "**N**" já que **x** não é primo, pois **x** tem um divisor diferente de **1** e **x**. Caso não encontre um divisor para **x**, imprima "**S**", já que <b>&radic;<span style="text-decoration: overline">N</span></b> e **x** é um número primo. 

No pior caso esse código percorre <b>&radic;<span style="text-decoration: overline">N</span></b> números mais <b>&radic;<span style="text-decoration: overline">x</span></b> no loop interno. Se <b>x = O(&radic;<span style="text-decoration: overline">N</span>)</b>, a complexidade dessa solução será <b>O(&radic;<span style="text-decoration: overline">N</span> + &radic;<span style="text-decoration: overline">N</span>) = O(&radic;<span style="text-decoration: overline">N</span>)</b>. Como <b>N &#10881; 10<sup>12</sup></b> essa solução passa no tempo limite.
Um exemplo de implementação segue abaixo:

{% gist wellvolks/78df48a79dd8a6b2026d0ad604537b5e leandro_terrenos.cpp %}

[hackerrank-h]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/terrenos
