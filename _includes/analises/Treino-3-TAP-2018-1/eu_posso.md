 <div id="eu_posso">
 
 </div>
## K - Eu Posso Adivinhar a Estrutura de Dados!

Resolva este problema:
[URI][uri-1340]{:target="_blank"}

Excelente problema! Permite utilizar três estruturas de dados: <a href="http://www.cplusplus.com/reference/stack/stack/"><b>stack</b></a><strike> de frango</strike>, <a href="http://www.cplusplus.com/reference/queue/queue/"><b>queue</b></a> e <a href="http://www.cplusplus.com/reference/queue/priority_queue/"><b>priority_queue</b></a>. A ideia é simular, ao mesmo tempo, as três estruturas. Sem em algum momento a entrada ferir uma das estruturas então a mesma será descartada das possibilidades. No final se a quantidade de descartas for inferior a duas então não é possível saber qual estrutura de dados. Caso todas tenham sido descartadas então não pode ser nenhuma das estruturas. Por fim, se sobrar apenas uma então está é a estrutura que reflete o comportamento dos dados fornecidos.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/b82efe0efb54835c41bc3ff330af850c eu_posso.cpp %}


[uri-1340]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1340

