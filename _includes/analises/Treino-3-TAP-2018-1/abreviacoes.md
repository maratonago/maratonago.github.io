 <div id="abreviacoes">
 
 </div>
## A - Abreviações

Resolva este problema:
[URI][uri-1519]{:target="_blank"}

O problema pede para que, dado um texto, substitua todas as ocorrências de uma palavra pela sua abreviação. Tal processo é explicado no terceiro paragrafo: <b><i>"O sistema de abreviações funciona da seguinte maneira: para cada letra, é possível escolher uma palavra que inicia com tal letra e que aparece no post. Uma vez escolhida a palavra, sempre que ela aparecer no post, ela será substituída por sua letra inicial e um ponto, diminuindo assim o número de caracteres impressos na tela"</i></b>. Segundo o enunciado do probema, o objetivo consiste em abreviar as palavras de forma que o texto fique o mais curto possível. Note que como vamos trocar as palavras por uma letra e um ponto então no final das contas temos nó máximo <b>26</b> abreviações possíveis. Uma primeira abordagem seria ordenar as palavras pela critério da maior quantidade de vezes que ocorreram no texto, mas não é garantido que o texto final seja mínimo, pois podem existir palavras maiores que ocorrem uma menor quantidade de vezes mas que minimizam mais o texto se forem abreviadas. Ok! Então basta ordenar as palavras pelo critério do maior tamanho? Não, pois da mesma forma podem existir palavras menores que ocorrem uma quantidade maior de vezes e que minimizam mais no final. O problema destas abordagens é que elas são <b>8</b> ou <b>80</b>, assim a solução é o meio termo delas, ou seja, as palavras que vamos escolher para substituir (quantidade de palavras distintas entre <b>0</b> e <b>26</b>, inclusive) que tenham o maior peso possível: <b>(tamanho_da_palavra - 2) * quantidade_de_vezes_que_tal_palavra_ocorreu_no_texto</b>. Observe o <b>-2</b> na primeira parte da fórmula, se fosse apenas <b>tamanho_da_palavra * quantidade_de_vezes_que_tal_palavra_ocorreu_no_texto</b>, uma palavra com tamanho <b>5</b> que ocorreu <b>10</b> vezes teria o mesmo peso que uma palavra de tamanho <b>10</b> mas ocorreu <b>5</b> vezes. Tal situação permitiria que a primeira palavra fosse escolhida mas o texto seria reduzido por <b>15</b> enquanto que escolhendo a segunda palavra o texto seria reduzido por <b>40</b>, mas por quê? Observe que o tamanho real de um palavra que contribuirá para o peso é o tamanho dela menos <b>2</b>, já que ela será substituída por uma letra e um ponto. 

Um exemplo de implementação segue abaixo:

{% gist wellvolks/5a443502b8181336b37c76b2351921be abreviacoes.cpp %}

[uri-1519]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1519

