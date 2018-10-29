
## F - Fase

Resolva este problema:
[URI][uri-2663]{:target="_blank"}

Basta ordenar as pontuações em order decrescente. Começamos com `resposta = k` e incrementamos enquanto houverem elementos e a pontuação na posição `resposta` for igual a pontuação na posição `resposta - 1`.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 F.py %}

[uri-2663]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2663

