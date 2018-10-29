
## D - Despojados

Resolva este problema:
[URI][uri-2661]{:target="_blank"}

Dada a fatoração em números primos de um valor $$N = p_1^{e_1} \times p_2^{e_2} \times \dots \times p_k^{e_k}$$. Um número $$D$$ é divisor de $$N$$ se e somente se em sua fatoração não existe um número primo que não está presente nos fatores de $$N$$ e os expoentes dos fatores de $$D$$ são todos menores ou iguais ao expoente do fator correspondente de $$N$$.

Assim, considerando a definição de número despojado, podemos ver as fatorizações dos divisores despojados de $$N$$ como números da forma $$p_1^{d_1} \times p_2^{d_2} \times \dots \times p_k^{d_k}$$, onde $$d_i \in {0, 1}$$. Com isso basta calcular o número de fatores primos de $$N$$ e computar o número de combinações equivalentes a divisores despojados. Esse valor, se a quantidade de fatores primos distintos for igual a $$K$$, é dado por $$2^K - (K+1)$$. Ou seja, calculamos todas as combinações e desconsideramos aquelas com apenas 0 ou 1 elementos.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 D.java %}

[uri-2661]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2661
