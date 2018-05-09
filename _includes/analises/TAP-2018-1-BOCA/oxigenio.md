
 <div id="oxigenio">
 
 </div>
## D1 - Oxigênio

Este problema exige uma boa interpretação do enunciado. Destaca-se então alguns trechos do enunciado:
<ul>

<li><b>Ele está numa altitude em que não precisa usar o balão de oxigênio reserva, mas ao se mover para qualquer posição mais elevada o uso do oxigênio será necessário.</b>  Neste ponto que pode ocorrer uma interpretação erronia do problema, uma vez que o enunciado não deixa muito claro se será necessário o uso do oxigênio  quando estiver em uma posição mais alta que a anterior ou, caso esteja em qualquer posição, será necessário o uso do oxigênio se tal posição  for mais alta que a primeira posição (1,1). A segunda interpretação é a correta. </li>

<li><b>[...]não pode subir ou descer mais de 2 unidades de altitude em um único passo.</b> Já aqui é em relação a posição atual do alpinista, ou seja, se o mesmo está na posição <b>(i,j)</b> e deseja ir para a posição <b>(i+1,j)</b>, só será possível desde que a diferença de altitude entre alas seja menor ou igual a <b>2</b>.</li>

<li><b>Se a altitude do ponto inicial (final) requer oxigênio, uma unidade de oxigênio é consumida pelo alpinista durante o passo para sair dessa (chegar nessa) posição.</b> Suponha, novamente, que o  alpinista esteja na posição <b>(i,j)</b> e deseja deslocar-se para a posição <b>(i+1,j)</b>, sejam <b>H<sub>1</sub></b>, <b>H<sub>2</sub></b> e <b>H<sub>3</sub></b> as altitudes das posições <b>(1,1)</b>, <b>(i,j)</b> e <b>(i+1,j)</b>, respectivamente.</li>
</ul>

Ciente de tais trechos, o problema então consiste em encontrar o caminho entre as posições <b>(1,1)</b> e <b>(n,n)</b> que exija menor consumo de unidades de oxigênio. Tal problema pode ser resolvido com um BFS.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/0d13a370630323d9af148926e5241bdd oxigenio.cpp %}
