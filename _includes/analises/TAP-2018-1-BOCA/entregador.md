 <div id="entregador">
 
 </div>
## C1 - Entregador de pizza

O enunciado do problema fornece a modelagem utilizada para indicar as possibilidades de movimento a partir de uma localização do entregador de pizza. Dado tal modelagem, o problema consiste em determinar a quantidade mínima de intersecções que o entregador de pizza passa ao se mover da extremidade mais Noroeste <b>(1,1)</b> da cidade para a extremidade mais a Sudeste <b>(l,c)</b> da cidade.

Este problema pode ser resolvido com um <b>BFS</b>, uma vez que a quantidade de interseções entre duas localizações adjacentes é <b>1</b>. 

Um exemplo de implementação segue abaixo:

{% gist wellvolks/c297bf2ddddeb4ff7715f98d82403061 entregador.cpp %}

