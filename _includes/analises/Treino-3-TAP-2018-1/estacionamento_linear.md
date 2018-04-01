 <div id="estacionamento_linear">
 
 </div>
## D - Estacionamento Linear

Resolva este problema:
[URI][uri-1523]{:target="_blank"}

Este problema pode ser resolvido de várias formas, uma delas é simulando o estacionamento através de uma estrutura de dados <a href="http://www.cplusplus.com/reference/stack/stack/"><b>stack</b></a><X> <strike>de frango</strike>. Onde <b>X</b> é um <a href="http://www.cplusplus.com/reference/utility/pair/"><b>pair</b></a> de <b>int's</b>. O primeiro e o segundo elemento de <b>X</b> armazenam o tempo que o carro chegou e de deseja sair do estacionamento, respectivamente. A ideia é ir simulando o estacionamento: quando um carro chega, para que seja possível, o tempo de chegada dele tem que ser maior ou igual ao tempo de saída do último carro do estacionamento. Se tiver algum que tem o tempo maior então não é possível utilizar o estacionamento. Remova todos os carros da estacionamento (pilha) que têm tempo de saída melhor ou igual ao tempo de chegada do carro atual. Depois basta inserir o carro no estacionamento. Outro ponto, se em algum momento, após remover os carros, o estacionamento ficar com uma quantidade igual ou superior a <b>k</b> então não é possível utilizar o estacionamento. Se no final foi possível colocar todos os carros no estacionamento então é possível utiliza-lo.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/874a00a9ddf48b1ef3b96da77f88de0c estacionamento_linear.cpp %}


[uri-1523]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1523
