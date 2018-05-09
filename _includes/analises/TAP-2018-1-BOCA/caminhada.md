 <div id="caminhada">
 
 </div>
## H1 - Caminhada na montanha

O enunciado é bem claro e direto, dado um mapa de altura de uma cadeia de montanhas e a restrição de que um caminhante amador se mover para um local adjacente (esquerda / direita, para cima / para baixo, mas não diagonalmente) somente se a diferença de altura com a localização atual for no máximo 1, o problema consiste em determinar o menor número de etapas necessárias para cruzar a cadeia de montanhas entre as bordas esquerda e direita de uma determinada área quadrada. As etapas contadas são as transições de um local para o próximo. Oura informação importante é a de que um caminhante pode começar em qualquer uma das posições mais à esquerda.

Ciente das restrições e movimentos possíveis, este problema pode ser resolvido com <b>BFS</b>. Para cada linha <b>i</b> e coluna  <b>j = 1</b>, realize um <b>BFS</b> partindo dessa posição e compute a menor distância para as posições na última coluna, ou seja, <b>j = c</b>.  


Um exemplo de implementação segue abaixo:

{% gist wellvolks/655bfd2ef0951bae5775b2022b1fa4a0 caminhada.cpp %}
