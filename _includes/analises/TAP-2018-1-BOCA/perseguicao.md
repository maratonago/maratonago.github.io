 <div id="perseguicao">
 
 </div>
## I1 - Perseguição do cavalo

Dado a posição de um peão e de um cavalo em um tabuleiro de xadrez ( com dimensão variável), o enunciado pede para computar a menor quantidade de movimentos que o cavalo deve realizar para capturar o peão. Se tal evento não seja possível, então deve-se informar a menor quantidade de movimentos do cavalo que gere um empate ( peão em um posição <b>(i, j)</b> e o cavalo em uma posição <b>(i+1, j)</b>). Se mesmo assim não for possível ocorrer um empate então o peão ganha, uma vez que o mesmo irá conseguir chegar na última linha do tabuleiro. Deseja-se, também, nesse caso a menor quantidade de movimento do cavalo. 

Esse problema pode ser resolvido com um <b>BFS</b> de estados. O <b>estado</b> nesse contexto nada mais do que a posição do cavalo, a posição do peão, a quantidade de movimentos realizados pelo cavalo e um valor que informa de quem é a vez de jogar (peão ou cavalo). Tal estado pode ser representado por uma <b>Struct</b>. Segue um exemplo.

{% gist wellvolks/ec00794e7b860dc393f5f8d948cc2244 estado.cpp %}

A transição de um estado para o outro no <b>BFS</b> ocorre da seguinte forma:
<ul>
<li>Se o turno é do peão então ele movido uma casa para frente, nesse momento deve-se verificar se o mesmo está na mesma posição do cavalo, se estiver então ocorreu empate, se esse foi o primeiro empate deve-se salvar a quantidade de movimento do cavalo. No caso de empate ou se o peão chegar na última linha do tabuleiro não há próximo estado para colocar na fila.</li>

<li>Se o turno é do cavalo, então quando ele mover deve-se verificar se ele ganha, ou seja, se fica na mesma posição do peão, caso fique então o cavalo consegue ganhar, basta retornar a quantidade de movimentos que ele chegou nesse estado.
Existem três repostas possíveis, vitória, empate ou derroa. Para ter controle de qual ocorreu, pode-se utilizar duas variáveis: <b>win = -1</b> e <b>empate = -1</b> que irá armazenar o primeiro momento que o cavalo vence e o primeiro momento que ocorreu um empate, respectivamente.</li> 
</ul>
Desta forma, após o BFS, se a variável <b>win</b> estiver com <b>-1</b> então o cavalo não ganhou, nesse caso deve-se verificar se a variável <b>empate</b> é diferente de <b>-1</b>, se for então ocorreu um empate. Caso contrário o cavalo perdeu com <b>max(0,(L-peao.x)-1)</b> movimentos, já que se ele não ganhou então quer dizer que o peão chegou no final, ou seja, o total de movimentos que o cavalo fez é igual a quantidade de movimentos do peão para chegar no final. O <b>-1</b> é necessário, uma vez que o peão começa jogando, então no final o cavalo irá fazer <b>1</b> movimento a menos.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/30608c1fa242d5cde1b97f2f381235e3 perseguicao.cpp %}

