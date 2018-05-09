 <div id="rato">
 
 </div>
## G1 - A jornada do rato

O rato pode mover-se para direita ou para baixo. O mesmo não pode ir para uma gaiola que tenha um gato. O enunciado pede para calcular a quantidade de caminhos que o rato pode fazer ao partir da posição <b>(1,1)</b> e chegar na posição <b>(l,c)</b>. Olhando para os movimentos possíveis do rato, se ele está em uma posição <b>(i,j)</b>, os movimentos possíveis são: ir para a posição <b>(i+1,j)</b> ou para a posição <b>(i,j+1)</b>. Certo, vamos olhar para esses movimentos da perspectiva da posição que se deseja ir. Se o rato está na posição <b>(i, j)</b>, ele pode ter vindo da posição <b>(i-1,j)</b> ou da posição <b>(i, j-1)</b>. Desta forma, a quantidade caminhos possíveis para chegar na posição <b>(i, j)</b> vai ser a soma das quantidades de caminhos para chegar nas posições <b>(i-1, j)</b> e <b>(i, j-1)</b>. 

A Figura abaixo ilustra um exemplo dessa ideia. Note-se que o rato inicia na posição <b>(1, 1)</b> e deseja chegar na posição <b>(3, 4)</b>. Com o intuito de eliminar alguns <b>ifs</b> na implementação, foi criado uma borda na parte esquerda e superior da matriz. A cada passo, podemos ir computando a quantidade de caminhos possíveis, repare na posição <b>(3, 3)</b>, o total de caminhos é dado por <b>2</b>, já que existe um único caminho para chegar nas posições <b>(2, 3)</b> e <b>(3, 2)</b>. Por outro lado, na posição <b>(3, 4)</b> descobrimos que existem <b>3</b> caminhos possíveis. 

![](/_assets/images/rato.png){: .center-image }

Um exemplo de implementação segue abaixo:

{% gist wellvolks/52fd2e71dcd2887643e9b945d6d049d4 rato.cpp %}
