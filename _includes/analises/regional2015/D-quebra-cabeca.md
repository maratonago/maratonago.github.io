
## D - Quebra-cabeça

Resolva este problema:
[Uva][uva-12953]{:target="_blank"},
[URI][uri-1934]{:target="_blank"}

Esse era um problema simples mas que enganou muitas equipes. A entrada consite
de um grid $$NxM$$ no qual em cada célula temos o nome de uma variável. Além 
disso temos o valor da soma das variáveis em cada linha e em cada coluna do
grid. O que o problema pede é que encontremos os valores de cada variável.
A impressão que dá é a de que é necessário resolver um sistema de equações
para determinar o valor das variáveis e provavelmente por isso muitas equipes
deixaram esse problema de lado. Acontece que a solução pro problema na verdade
está descrita no enunciado do mesmo, em um trecho que diz:

`Mas como esse tipo de quebra-cabeças é para crianças, ele tem uma propriedade
que o torna mais fácil de encontrar a solução:sempre é possível encontrar uma
linha ou coluna em que há apenas uma variável cujo valor ainda é desconhecido.
Assim, uma possível maneira de resolver o problema é, a cada passo da solução,
encontrar o valor de uma variável.`

Assim a solução do problema consiste basicamente em implementar essa idéia.
A cada passo encontramos uma linha ou coluna em que aparece apenas uma variável
com valor desconhecido e descobrimos o valor dessa variável. Como a cada passo
vamos eliminar uma linha ou uma coluna das buscas, o número máximo de variáveis
que pode haver no quebra-cabeça é $$N+M$$. Então mesmo que e a cada passo
todo o grid seja varrido na procura da linha/coluna que será usada para
descobrir o valor da variável atual a complexidade da solução continua sendo
da ordem de $$O(N^3)$$ que é eficiente o suficiente para os limites do problema.

Segue abaixo um exemplo de implementação:

{% gist paulocezar/4d4cc4322fca30f33289 D-quebra-cabeca.cpp %}

[uva-12953]:    https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4832
[uri-1934]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/1934