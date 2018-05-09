<div id="imperador">
 
 </div>

## E1 - Labirintos

Como os demais problemas discutidos anteriormente, este problema pode ser resolvido com <b>BFS</b>. O único ponto que deve-se observar, já que não é deixado claro no enunciado, são os movimentos possível que o competidor pode realizar. No caso, ele pode mover-se para as quatro direções (<b>Norte</b>, <b>Sul</b>, <b>Leste</b> e <b>Oeste</b>), desde que tal direção não leve para uma posição que tenha o caractere <b>*</b>.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/52509c43a09f6d177880915204de706b labirintos.cpp %}
