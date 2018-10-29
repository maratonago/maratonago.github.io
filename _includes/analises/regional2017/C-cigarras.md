
## C - Cigarras Periódicas

Resolva este problema:
[URI][uri-2660]{:target="_blank"}

O primeiro passo é notar que a quantidade de iterações necessária até que os ciclos de vida coincidam é o mínimo múltiplo comum dos ciclos de todas as populações em questão. Como queremos que o resultado respeite o limite superior $$L$$ não faz sentido que a nova população tenha um ciclo de vida maior que $$L$$. Assim, basta calcular o mínimo múltiplo comum das populações existentes com todos os valores de 1 a $$L$$ e imprimir o valor que gerou o melhor resultado.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 C.cpp %}

[uri-2660]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2660

