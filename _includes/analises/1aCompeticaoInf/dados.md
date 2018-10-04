## Dados
<div id="dados"></div>

Autor: Welton Cardoso

Percebe-se que para um palíndromo de tamanho par (N % 2 == 0)  basta olhar para os N/2 primeiros dados, pois o restante dos N/2 dados deverão refletir os N/2 primeiros para que a sequência de dados seja palindrômica. Por exemplo, suponha N = 6, as sequências palindrômicas terão o seguinte formato abccba, com  1 <= a,b,c <= 6. A probabilidade de se obter, em um próximo arremesso,  uma sequência palindrômica será dado pelos eventos favoráveis sobre todas as possibilidades, ou seja, (6^(n/2))/(6^n). 

Para o caso de uma sequência de tamanho ímpar (N % 2 != 0 ), o processo é parecido.  Mas como o dado na posição ((N/2)+1) poderá ter qualquer valor na sua face superior, então a probabilidade será (6^((n+1)/2))/(6^n). Por exemplo, suponha N = 5, as sequências palindrômicas terão o seguinte formato abcba, com  1 <= a,b,c <= 6. 

Percebe-se que se considerámos o piso de N/2, então (6<sup>(&lfloor;n/2&rfloor;)</sup>)/(6<sup>n</sup>) = (6<sup>((&lfloor;n+1&rfloor</sup>)/2);)/(6<sup>n</sup>). Assim, podemos considerar o caso geral de N como (6<sup>((&lfloor;n+1&rfloor;)/2)</sup>)/(6<sup>n</sup>).

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e41961e66dc9a620257a7cf81c9067a3 dados_welton.cpp %}
