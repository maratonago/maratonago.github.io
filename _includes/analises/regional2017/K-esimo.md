
## K - K-ésimo

Resolva este problema:
[URI][uri-2668]{:target="_blank"}

Como só estamos interessados na parte inteira de $$X^N$$ onde $$X = A + \sqrt{B}$$, se conseguirmos nos livrar da raiz quadrada e trabalhar apenas com inteiros, podemos calcular $$X^N \bmod 10^5$$. Dessa forma seria possível usar apenas tipos de dados básicos para encontrar a resposta. Uma primeira tentativa é usar o [Binómio de Newton][binomio-newton] para tentar se livrar da raiz quadrada. O resultado é $$\sum_{K=0}^{N}{\binom{N}{K}A^{N-K}\sqrt{B}^K}$$. Infelizmente isso não ajuda muito já que ainda temos $$\sqrt{B}^K$$ com valores impares de $$K$$. 

Uma outra restrição no enunciado que certamente não está lá sem motivo é que $$-1 < A -  \sqrt{B} < 1$$. Será como essa restrição pode nos ajudar? Ao olharmos pra expansão de $$(A - \sqrt{B})^N$$ obtemos $$\sum_{K=0}^{N}{\binom{N}{K}A^{N-K}(-1)^K\sqrt{B}^K}$$. Aqui podemos observar algo interessante, ao olhar para a soma $$(A + \sqrt{B})^N + (A - \sqrt{B})^N$$, se expandirmos as potências dos binómios os termos com $$K$$ ímpar irão se cancelar, já para valores impares de $$K$$ temos que $$-1^K = -1$$. Assim chegamos a $$Z = (A + \sqrt{B})^N + (A - \sqrt{B})^N = 2\sum_{K=0}^{\lfloor\frac{N}{2}\rfloor}{\binom{N}{2K}A^{N-2K}B^K}$$. $$Z$$ é um valor inteiro que esperamos ser capazes de calcular sem dificuldade, isso já ajuda um pouco. Outro ponto é que $$-1 < A -  \sqrt{B} < 1 \implies -1 < (A - \sqrt{B})^N < 1$$, logo a parte inteira de $$(A + \sqrt{B})^N$$ é igual a $$Z$$ ou $$Z-1$$, o que pode ser determinado apenas olhando para a paridade de $$N$$ e os valores de $$A$$ e $$B$$.

A abordagem parece promissora, tirando o fato de que $$N \leq 10^9$$ não permite que calculemos $$Z = (A + \sqrt{B})^N + (A - \sqrt{B})^N$$ com complexidade de tempo linear. Para contornar essa dificuldade podemos tentar encontrar uma recorrência linear tal que $$F(N) = (A + \sqrt{B})^N + (A - \sqrt{B})^N$$ e com isso usar [exponenciação de matrizes][matrix-expo] para calcular $$F(N)$$  em tempo logarítmico. 

Se calcularmos os primeiros valores de $$F(N)$$ em função de $$A$$ e $$B$$ temos que:

$$F(0) = 2$$

$$F(1) = 2A$$

$$F(2) = 2(A^2 + B)$$

$$F(3) = 2(A^3 + AB)$$

Nesse ponto podemos dar um chute de que nossa recorrência é da forma $$F(N) = C \times F(N-1) + D \times F(N-2)$$ (ou primeiro chutamos $$F(N) = C \times F(N-1) + D$$ e partimos pra segunda tentativa ao não chegar a lugar algum).
Aqui conseguimos um sistema de equações onde:

$$F(2) = C \times F(1) + D \times F(0)\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ F(3) = C \times F(2) + D \times F(1)$$

$$2(A^2 + B) =  C \times 2A + D \times 2\ \ \ \ \ \ \ \ \ \ \ 2(A^3 + AB) = C \times 2(A^2 + B) + D \times 2A$$

Com isso encontramos $$C$$ e $$D$$ em função de $$A$$ e $$B$$, sendo que $$C = 2A$$ e $$D = B - A^2$$. Agora basta utilizar exponenciação de matrizes para calcular o resultado de $$F(N) = 2AF(N-1) + (B - A^2)F(N-2)$$.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 K.py %}

[uri-2668]:         https://www.urionlinejudge.com.br/judge/pt/problems/view/2668
[binomio-newton]:   https://pt.wikipedia.org/wiki/Bin%C3%B3mio_de_Newton
[matrix-expo]:      http://fusharblog.com/solving-linear-recurrence-for-programming-contest/
