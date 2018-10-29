
## B - Brincadeira

Resolva este problema:
[URI][uri-2659]{:target="_blank"}

Uma maneira bastante popular de calcular somas de intervalos em vetores estáticos é usando somas de prefixos. Para simplificar, assumimos que o vetor $$A$$ é indexado a partir de 1. Definimos então um vetor $$P$$, tal que $$P_0 = 0$$  e $$P_i = \sum_{j=1}^{i}A_j$$. Desse modo podemos obter a soma do intervalo $$[i, j]$$ como $$P_j - P_{i-1}$$. Usando essa representação e o [Princípio da casa dos pombos][casa-pombos] podemos provar que sempre existe uma subsequência contígua cuja soma dos elementos é divisível por $$X$$.

Se calcularmos os valores $$P_i$$ módulo $$X$$ existem apenas $$X$$ possíveis valores. Logo, a partir do elemento $$P_X$$, garantidamente teremos valores repetidos. Isso significa que sempre seremos capazes de encontrar dois índices $$L$$ e $$R$$ distintos tais que $$P_L = P_R$$. Sendo assim sempre poderemos encontrar um intervalo $$[L+1, R]$$ cuja soma dos elementos é divisível por $$X$$, visto que $$P_R - P_{L+1-1 = L} = 0$$.

Basta, então, gerar os elementos da sequência e manter a soma do prefixo (módulo $$X$$) visto até o momento, armazenando a posição da primeira ocorrência de cada valor. Ao encontrarmos um valor que já foi visto antes, verificamos se a distância entre as posições é maior ou igual a $$Y$$, imprimindo tais índices em caso positivo. Com essa estratégia garantimos também que vamos obter o menor valor para os inteiros $$I$$ e $$F$$ que representam os índices do primeiro e do último elementos da subsequência contígua escolhida.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 B.cpp %}

[uri-2659]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2659
[casa-pombos]:  https://pt.wikipedia.org/wiki/Princ%C3%ADpio_da_casa_dos_pombos
