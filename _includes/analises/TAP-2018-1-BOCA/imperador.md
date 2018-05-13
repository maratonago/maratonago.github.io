 <div id="imperador">
 
 </div>
## A1 - Imperador Kaktus

![](/_assets/images/cactus2.png ){:height="350px" width="350x" .center-image}

Alguns pontos importantes que devemos observar no problema são: 

<ul>
<li>A cada minuto a inundação se expande para todos os campos vazios que têm pelo menos um lado em comum com um campo alagado.</li>

<li>O <b>Pintor e os três pequenos Ouriços</b> não podem passar através das rochas e nem por campos inundados.</li>

<li>A toca do <b>Castor</b> nunca será inundada. (Note que a água não irá expandir através da toca do <b>Castor</b>).</li>

<li>O <b>Pintor e os três pequenos Ouriços</b> deslocam-se simultaneamente com a inundação. Mas o <b>Pintor e os três pequenos Ouriços</b> não podem se mover para um campo que está prestes a ser inundado no mesmo instante (minuto).</li>
</ul>

Levantados tais pontos, o problema pede para computar o menor tempo necessário para o Pintor e os três pequenos Ouriços alcançarem com segurança a toca do <b>Castor</b>. Podemos utilizar um único<b> BFS</b> para resolver tal problema. No entanto, acho mais intuitivo rodar dois <b>BFS’s</b>, um para descobrir o instante que cada campo será inundado e outro para descobrir o menor tempo necessário para o <b>Pintor e Cia</b> chegarem na toca do <b>Castor</b>.

Um exemplo de execução dos BFS é mostrado na Figura abaixo. O caso de teste utilizado é o terceiro do enunciado do problema. Note que no lado esquerdo da Figura temos o preenchimento da matriz de tempos de inundação executado pelo <b>BFS (Inundação)</b>. No lado direito é apresentado a execução do <b>BFS (Pintor e Cia)</b>, onde o <b>Pintor e Cia</b> só irá mover para um campo caso o mesmo tenha sido inundado em um instante posterior ao tempo que o <b>Pintor e Cia</b> acabara de chegar. Os campos em vermelho são os que não podem ser alcançados e os verdes o que podem. Os números com cor azul representam os tempos de inundação dos campos e os com cor laranja os tempos que <b>Pintor e Cia</b> chegaram nos campos.

![](/_assets/images/imperador.png){: .center-image }

Um exemplo de implementação segue abaixo:

{% gist wellvolks/9b009f9aba05ff22c47a21f7001b5757 imperador.cpp %}

Uma outra abordagem, desenvolvido por <b>Rafael Leão Ramos</b>, utilizando um único <b>BFS</b> apresenta a seguinte ideia: "Cada ciclo do BFS equivale à um minuto na floresta encantada, a cada ciclo a água e o Pintor e cia se expandem, a água deve se expandir primeiro porque o Pintor e cia não podem se mover para um campo que será inundado no mesmo minuto.

Só será usada uma matriz para armazenar os caracteres, também será a partir dela que os elementos irão se expandir e ela também servirá como matriz de visitados.

No começo de cada ciclo <b>ans</b> é incrementado, <b>ans</b> armazena o tamanho de minutos gastos.

A cada ciclo é verificado o tamanho de cada fila, e então um ''for" percorre a fila de 0 até esse tamanho removendo os elementos do ''front" e ignora os elementos que estão sendo adicionados nesse loop, eles só serão verificados no próximo ciclo. 

Se o Pintor e cia(S) conseguirem se expandir até a toca do castor(<b>D</b>) é impresso na tela o total de minutos gastos, e programa encerra. Caso o BFS termine sem S se expandir até <b>D</b> a palavra "KAKTUS\n" é impressa;"

![](/_assets/images/imperador2.png){: .center-image }

O código desenvolvido por ele segue abaixo:

{% gist wellvolks/26733a95ca0c0a73a73dfc8b9dc24a6c Imperador.cpp %} 

