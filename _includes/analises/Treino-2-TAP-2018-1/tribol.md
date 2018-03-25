 <div id="tribol">
 
 </div>
## I - Tribol

Resolva este problema:
[URI][uri-1875]{:target="_blank"}

<p align="justify">
Olhando para as regras do jogo podemos montar uma matriz <b>M</b> para armazenar as pontuações possíveis. Formalmente, seja uma matriz <b>M[ X ][ Y ] = w </b> de forma que <b>X</b>, <b>Y ∈ {'R'</b>, <b>'G'</b>, <b>'B'}</b>, <b>X ≠ Y</b> e <b> w  ∈ {1, 2}</b>. Por exemplo, <b>M[ 'R' ][ 'G' ] = 2</b>, uma vez que o time <b>'R'</b> marca um gol no time <b>'G'</b> e como está a esquerda do seu adversário a pontuação será o <b>dobro</b>. Mapeado as pontuações, basta computar os saldos de gols dos times e imprimir uma das possíveis repostas (trempate, empate e time com o maior saldo de gols) seguindo os critérios estabelecidos no enunciado.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/c552cdbc318ed89b2613b5886789f037 tribol.cpp %}


[uri-1875]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1875

