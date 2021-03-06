 <div id="penta">
 
 </div>
## P3 - Penta!

Resolva este problema:
[SPOJ][spoj-PENTA]{:target="_blank"}

Com o dinheiro recebido como prêmio pela conquista da Copa do Mundo os jogadores decidiram contratar os seus serviços. Você deve escrever um programa que determine o número mínimo de trocas de jogadores no palanque, conhecendo a lista formulada por Felipão e sabendo que os jogadores desejam ficar no palanque a maior quantidade tempo possível. 

Antes de explicar uma solução para esse problema, faz-se necessário apresentar as três situações referente ao palanque. 

<ul>
  <li><b>1º situação:</b> o palanque tem vaga e o próximo da lista não está no palanque. Nesse caso, basta o jogador subir no palanque.</li>
  <li><b>2º situação:</b> o palanque tem vaga e o próximo da lista já está no palanque. Nesse caso, não haverá movimentação de jogadores.</li>
  <li><b>3º situação:</b> o palanque está cheio e o próximo da lista não está no palanque. Nesse caso, um dos jogadores que está no palanque deverá descer e próximo da lista deverá subir, por conseguinte será contabilizado uma troca.</li>
  <li><b>4º situação:</b> o palanque está cheio e o próximo da lista já está no palanque. Nesse caso, não haverá troca de jogadores.</li>
</ul>

Dentre as quatro situações, a única problemática é a terceira. Qual jogador deverá descer para que o próximo da lista suba no palanque? Escolher um jogador que está a mais tempo no palanque parece ser o mais justo, no entanto, uma vez que tal jogador pode aparecer logo em seguida na lista, tal escolha irá resultar em mais uma troca futuramente. Uma outra estratégia é escolher o jogador que terá que estar no palanque novamente o mais tardar possível dentre os demais jogadores no palanque. Assim, os jogadores que em breve terão que estar no palanque novamente tem uma maior prioridade dentre os outros para ficar no palanque. Desta forma, a quantidade de trocas de jogadores será reduzida. 

O controle de quem está ou não no palanque pode ser feito por um [set][s] de <b>pair < int , int ></b>, onde a primeira posiçao do pair representa o próximo momento que o jogador, cujo identificador está na segunda posição do pair, deverá estar no palanque novamente. Note-se, que na terceira situação o jogador que deverá descer estará na última posição do set, uma vez que tal jogador terá o próximo momento no palanque o mais distante possível se comparado aos demais jogadores no palanque.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/aed27482bb451c8651131d216d9117a0 penta.cpp %}

[spoj-PENTA]:		https://br.spoj.com/problems/PENTA/
[s]: https://www.geeksforgeeks.org/set-in-cpp-stl/
