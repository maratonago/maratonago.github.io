 <div id="supermarket">
 
 </div>
## B - Supermarket

Resolva este problema:
[URI][uri-2065]{:target="_blank"}

O enunciado do problema descreve muito bem o processo de atendimento da fila de clientes. A dúvida pode surgir em como simular a ação do caixa, garantindo que quando o caixa fique livre ele atenda o próximo cliente e se existir dois ou mais caixas que fiquem livre no mesmo tempo, o caixa com menor identificador atenderá primeiro dentre eles. Este é um problema clássico que utiliza fila de prioridade, portanto iremos utilizar uma <a href="http://www.cplusplus.com/reference/queue/priority_queue/"><b>priority_queue</b></a><b>< X ></b>. No caso <b>X</b> será um <a href="http://www.cplusplus.com/reference/utility/pair/"><b>pair</b></a> de <b>int's</b>. O primeiro e o segundo termo de <b>X</b> armazenarão o tempo e o identificador do caixa, respectivamente. O processo é simples, no inicio todos os caixas estão na fila com tempo <b>0</b>, desta forma o primeiro que irá atender um cliente será aquele com menor identificador. Quando um caixa <b>i</b> começar a atender um  cliente <b>j</b> em um tempo <b>t</b>, o mesmo gastará <b>c<sub>j</sub> * v<sub>i</sub></b> unidades de tempo para atende-lo, logo o caixa <b>i</b> ficará disponível novamente no tempo <b>t + <b>c<sub>j</sub> * v<sub>i</sub></b></b>. O caixa, após atender, entrará novamente na fila. O caixa que estiver na frente da fila de caixas atenderá o cliente <b>i+1</b>. Repita o processo até que todos os clientes tenham sido atendidos. Note que a resposta final é o tempo do último caixa que completou o atendimento de um cliente.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/bbabda6e7801a9dcd76e50995e7cb2e7 supermarket.cpp %}


[uri-2065]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2065
