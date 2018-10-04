## Dados
<div id="dados"></div>

Autor: Welton Cardoso

Percebe-se que para um palíndromo de tamanho par <b>(N % 2 == 0)</b>  basta olhar para os <b><sup>N</sup>&frasl;<sub>2</sub></b> primeiros dados, pois o restante dos <b><sup>N</sup>&frasl;<sub>2</sub></b> dados deverão refletir os <b><sup>N</sup>&frasl;<sub>2</sub></b> primeiros para que a sequência de dados seja palindrômica. Por exemplo, suponha <b>N = 6</b>, as sequências palindrômicas terão o seguinte formato <b>abccba</b>, com  <b>1 &#10877; a,b,c &#10877; 6</b>. A probabilidade de se obter, em um próximo arremesso,  uma sequência palindrômica será dado pelos eventos favoráveis sobre todas as possibilidades de eventos, ou seja, <b><sup>(6<sup>&lfloor;<sup>N</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub></b>. 

Para o caso de uma sequência de tamanho ímpar <b>(N % 2 != 0)</b>, o processo é parecido.  Mas como o dado na posição <b><sup>N</sup>&frasl;<sub>2</sub> + 1</b> poderá ter qualquer valor na sua face superior, então a probabilidade será <b><sup>(6<sup>&lfloor;<sup>(N+1)</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub></b>. Por exemplo, suponha <b>N = 5</b>, as sequências palindrômicas terão o seguinte formato <b>abcba</b>, com  <b>1 &#10877; a,b,c &#10877; 6</b>. 

Percebe-se que ao considerámos o piso de  <b><sup>N</sup>&frasl;<sub>2</sub></b>, então <b><sup>(6<sup>&lfloor;<sup>N</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub> = <sup>(6<sup>&lfloor;<sup>(N+1)</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub></b> quando <b>N </b>for par. Assim, podemos considerar o caso geral de <b>N</b> como <b><sup>(6<sup>&lfloor;<sup>(N+1)</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub></b>.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e41961e66dc9a620257a7cf81c9067a3 dados_welton.cpp %}
