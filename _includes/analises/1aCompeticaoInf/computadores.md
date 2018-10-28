## B - Computadores
<div id="computadores"></div>

Autor: <font color = "blue">Leandro Vianna</font>

Enunciado: [Computadores][pb]

Resolva este problema: [Hackerrank][hackerrank-a]{:target="_blank"}

[pb]: https://github.com/maratonago/maratonago.github.io/raw/master/_includes/pdfs/primeira_comp_inf_ufg/B.pdf
[hackerrank-a]:	https://www.hackerrank.com/contests/ufg-contest-calouros/challenges/computadores

Existe uma escolha de lojas que é sempre mais vantajosa para Longo, escolher a loja de menor preço e comprar o máximo de computadores com o dinheiro do momento. Portanto, basta ordenar as lojas de forma crescente pelo preço dos computadores, e percorrer em sequência da loja de menor preço para a de maior preço, sempre tentando comprar a maior quantidade de computadores possível. 

Para calcular quantos computadores é possível comprar com o dinheiro atual, basta dividir o dinheiro atual pelo preço do computador da loja que está sendo testada no momento. O piso deste valor é a quantidade de computadores que poderá ser comprada. 

Assim, a cada iteração, basta retirar do dinheiro atual a quantidade de computadores comprados multiplicado pelo preço do computador nesta loja, ou seja, quanto foi gasto com computadores nesta loja. Deve ser mantida uma variável auxiliar inicializada com zero, e a cada iteração somar quantos computadores foram comprados, após as iterações esta variável conterá a resposta do problema, ou seja, a quantidade máxima de computadores que poderão ser comprados.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/6cd4766bae7191a3f2913ad8bbeed25e computadores_leandro.cpp %}
