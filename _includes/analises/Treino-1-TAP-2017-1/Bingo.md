
## A - Bingo!

Resolva este problema:
[URI][uri-1136]{:target="_blank"}

O enunciado do problema começa explicando a versão clássica do jogo de Bingo e logo após apresenta uma nova versão chamada **A**lbert-**C**harles-**M**ary.  Nesta versão o caller sorteia uma primeira bola, coloca-a de volta no globo, sorteia uma segunda bola, coloca-a de volta no globo e então anuncia a diferença absoluta entre os números das duas bolas. O problema consiste em descobrir se é possível gerar todos os números de **0** até **N** através destas diferenças levando em consideração as **B** bolas que restaram dentro do globo.  Seja **bi** o valor de alguma bola **i** dentro do globo e **c** um valor entre **0** e **N** inclusive, **c** é gerado se existir alguma bola, dentro do globo, com o valor **bi + c**. Como o valor de **N** ≤ **90**, podemos olhar para todos os valores possíveis de **c**, ou seja, de **0** até **N** e verificar se o valor **|bi + c|** está dentro do globo.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/510018490c4ea9a5787b0c5b258595c3 bingo.cpp %}

[uri-1136]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1136
