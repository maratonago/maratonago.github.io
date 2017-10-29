
## L - Laboratório de Biotecnologia

Resolva este problema:
[URI][uri-2669]{:target="_blank"}

A solução para esse problema é descrita detalhadamente no artigo [Finding submasses in weighted strings with Fast Fourier Transform][submasses].

Resumidamente, definimos $$p_i$$ como a submassa da subcadeia formada por $$s_1 s_2 \dots s_i$$. Com isso criamos dois polinômios $$P$$ e $$Q$$. O polinômio $$P$$ é definido por $$\sum_{i=1}^n{x^{p_i}}$$ enquanto o polinômio $$Q$$ é definido por $$\sum_{i=1}^{n-1}{x^{p_n-p_i}}$$. Como a submassa de uma subcadeia $$[i, j]$$ pode ser calculada pela subtração das submassas dos prefixos $$(p_j - p_{i-1})$$, ao calcular o polinômio $$C = P \times Q$$, podemos identificar quais submassas aparecem olhando para os coeficientes de $$C$$, já que eles são gerados a partir de todas as combinações dos coeficientes de $$P$$ e $$Q$$.

Para calcular a multiplicação entre $$P$$ e $$Q$$ de forma eficiente usamos [FFT][fft-codeforces].

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 L.cpp %}


[uri-2669]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2669
[submasses]: http://dreamboxx.com/mark/data/dam07.pdf
[fft-codeforces]: http://codeforces.com/blog/entry/43499
