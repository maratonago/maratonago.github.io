## Dados
<div id="dados"></div>

Autor: Welton Cardoso

Percebe-se que para um palíndromo de tamanho par (N % 2 == 0)  basta olhar para os <sup>N</sup>&frasl;<sub>2</sub> primeiros dados, pois o restante dos  <sup>N</sup>&frasl;<sub>2</sub> dados deverão refletir os <sup>N</sup>&frasl;<sub>2</sub> primeiros para que a sequência de dados seja palindrômica. Por exemplo, suponha N = 6, as sequências palindrômicas terão o seguinte formato abccba, com  1 &#10877; a,b,c &#10877; 6. A probabilidade de se obter, em um próximo arremesso,  uma sequência palindrômica será dado pelos eventos favoráveis sobre todas as possibilidades, ou seja, <sup>(6<sup>&lfloor;<sup>N</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub>. 

Para o caso de uma sequência de tamanho ímpar (N % 2 != 0), o processo é parecido.  Mas como o dado na posição <sup>N</sup>&frasl;<sub>2</sub> + 1 poderá ter qualquer valor na sua face superior, então a probabilidade será <sup>(6<sup>&lfloor;<sup>N</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub>. Por exemplo, suponha N = 5, as sequências palindrômicas terão o seguinte formato abcba, com  1 &#10877; a,b,c &#10877; 6. 

Percebe-se que ao considerámos o piso de  <sup>N</sup>&frasl;<sub>2</sub>, então <sup>(6<sup>&lfloor;<sup>N</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub> = <sup>(6<sup>&lfloor;<sup>(N+1)</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub> quando N for par. Assim, podemos considerar o caso geral de N como <sup>(6<sup>&lfloor;<sup>(N+1)</sup>&frasl;<sub>2</sub>&rfloor;</sup>)</sup>&frasl;<sub>6<sup>N</sup></sub>.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e41961e66dc9a620257a7cf81c9067a3 dados_welton.cpp %}
