
## G - Ginástica

Resolva este problema:
[URI][uri-2664]{:target="_blank"}

Esse problema pode ser resolvido com programação dinâmica (se não conhece a técnica pode começar por [aqui][dp-1] ou [aqui][dp-2]). Para simplificar podemos   Seja $$F(t, d)$$ o número de programas com $$t$$ minutos tais que a dificuldade do último exercício é $$d$$. O número total de programas que estamos interessados pode ser calculado como:

$$R = \sum_{d=M}^{N}{F(T, d)}$$

Podemos calcular $$f(t, d)$$ usando a recorrência:
$$
f(t, d) =
\begin{cases}
1,  & \text{se $t = 1$,} \\
f(t-1, d+1),  & \text{se $d = M$,} \\
f(t-1, d-1),  & \text{se $d = N$,} \\
f(t-1, d-1) + f(t-1, d+1) , & \text{caso contrário.}  \\
\end{cases}
$$

Um detalhe é que para calcular $$F(t, \dots)$$ só precisamos dos valores de $$F(t-1, \dots)$$ então podemos usar uma matriz com apenas duas linhas. Além disso também é possível considerar as dificuldades como $$[1, N-M+1]$$ no lugar de $$[M, N]$$.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 G.java %}


[uri-2664]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2664
[dp-1]: https://www.ime.usp.br/~maratona/aulas/programacao-dinamica
[dp-2]: http://wiki.icmc.usp.br/images/1/1a/PD1.pdf


