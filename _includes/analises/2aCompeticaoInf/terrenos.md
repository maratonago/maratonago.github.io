## H - Terrenos
<div id="terrenos"></div>

Autor: <font color = "blue">Leandro Vianna</font>

Resolva este problema: [Hackerrank][hackerrank-h]{:target="_blank"}

Basta verificar se N é um quadrado perfeito, ou seja, existe um número x tal que x$\dot$x=N, e se x é um número primo. Existem várias abordagens. Uma delas é percorrer em um loop os valores de 2 à raiz quadrada de N até que se encontre que um deles é um divisor de N, logo, um candidato para o x mencionado acima. Verifique se x*x=N, caso contrário imprima "N". Então verifique se x é um número primo, o que pode ser feito percorrendo de 2 à sqrt(x), se for encontrado que algum destes números divide x, então imprima "N" já que x não é primo, pois x tem um divisor diferente de 1 e x. Caso não encontre um divisor para x, imprima "S", já que x * x = N e x é um número primo. 

No pior caso esse código percorre sqrt(n)números mais sqrt(x)no loop interno. Se x = O(sqrt(n)), a complexidade dessa solução é O(sqrt(n) + sqrt(sqrt(n))) = O(sqrt(n)). Como N <= 10¹² essa solução passa no tempo limite.
Um exemplo de implementação segue abaixo:

{% gist wellvolks/78df48a79dd8a6b2026d0ad604537b5e leandro_terrenos.cpp %}

[hackerrank-h]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/terrenos
