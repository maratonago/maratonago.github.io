 <div id="imperador">
 
 </div>
## A1 - Imperador Kaktus

Alguns pontos importantes que devemos observar no problema são: 
<ul>
<li>A cada minuto a inundação se expande também para todos os campos vazios que têm pelo menos um lado comum com um campo alagado.
O Pintor e os três pequenos Ouriços não podem passar através das rochas e nem por campos inundados. </li>

<li> A toca do Castor nunca será inundada. (Note então que a água não irá expandir através da toca do Castor). </li>

<li> O Pintor e os três pequenos Ouriços deslocam-se simultaneamente com a inundação. Mas o Pintor e os três pequenos Ouriços não podem se mover para um campo que está prestes a ser inundado no mesmo instante (minuto).</li>
</ul>
Levantados tais pontos, o problema pede para computar o menor tempo necessário para o Pintor e os três pequenos Ouriços alcançarem com segurança a toca do Castor. Podemos utilizar um único BFS para resolver tal problema. No entanto, acredito que seja mais intuitivo rodar dois BFS, um para descobrir o instante que cada campo será inundado e outro para descobrir o menor tempo necessário para o Pintor e Cia chegarem na toca do Castor (garantindo que o tempo que os mesmos chegaram em um campo seja menor que o tempo que ela foi inundada pelo primeiro BFS).

![](/_assets/images/imperador.png){: .center-image }

Um exemplo de implementação segue abaixo:

{% gist wellvolks/9b009f9aba05ff22c47a21f7001b5757 imperador.cpp %}



