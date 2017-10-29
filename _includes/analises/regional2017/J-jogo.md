
## J - Jogo de Boca

Resolva este problema:
[URI][uri-2667]{:target="_blank"}

Podemos olhar para o jogo de uma forma diferente, ao invés de adicionar 1 ou 2 até alcançar $$N$$, podemos começar com $$N$$ e ir subtraindo $$1$$ ou $$2$$. Assim temos um jogo de subtração para o qual podemos classificar as posições em vencedoras ($$V$$) e perdedoras ($$P$$) como descrito [aqui][game-theory].

$$N$$ | 1 | 2 | 3 | 4 | 5 | 6 | $$\dots$$
-- | -- | -- | -- | -- | -- | -- | --
posição | $$\bbox[#6f6,border:.5px black,10px]{V}$$ | $$\bbox[#6f6,border:.5px black,10px]{V}$$ | $$\bbox[#f66,border:.5px black,10px]{P}$$ | $$\bbox[#6f6,border:.5px black,10px]{V}$$ | $$\bbox[#6f6,border:.5px black,10px]{V}$$ | $$\bbox[#f66,border:.5px black,10px]{P}$$ | $$\dots$$

Analisando as primeiras posições é possível perceber que a classificação tem um padrão cíclico. Além disso, cada posição vencendora alcança um única posição perdedora. Com essas duas observações é possível perceber que o problema se resume a calcular o resto da divisão de $$N$$ por 3. Um detalhe é que o valor de $$N$$ pode ser até $$10^{100}$$ logo não podemos usar tipos de dados inteiros em C++ ou Java. Uma alternativa é representar o número como string e calcular o resto da divisão na mão. Outra alternativa, talvez um pouco melhor, era aproveitar o fato de que Python agora faz parte das linguagens disponíveis e resolver o problema em uma única linha de código: `print(int(input())%3)`.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 J.java %}


[uri-2667]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2667
[game-theory]: https://www.topcoder.com/community/data-science/data-science-tutorials/algorithm-games/
