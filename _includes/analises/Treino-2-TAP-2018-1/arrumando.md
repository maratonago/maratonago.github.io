 <div id="arrumando">
 
 </div>
## J - Arrumando as Tarefas

Resolva este problema:
[URI][uri-1704]{:target="_blank"}

<p align="justify">
Você tem um único computador para realizar algumas tarefas. O lucro de uma tarefa é dado por <b>v</b> e mesma deve ser terminada em até <b>t</b> horas a partir do início do seu turno. O problema então pede para que você minimize a quantidade de dinheiro desperdiçada. Ou seja, o ideal seria conseguir terminar todas as tarefas, formalmente seja <b>S</b> a soma de todos os lucros das tarefas e <b>R</b> a soma dos lucros de um subconjunto de tarefas que conseguistes executar, desta forma, o objetivo é minimizar <b>S-R</b>. Este problema pode ser resolvido de forma <a href="http://www.ic.unicamp.br/~rocha/msc/complex/algoritmosGulososFinal.pdf">gulosa</a>: parece uma boa ideia executar primeiramente as tarefas que dão o maior lucro possível. Se duas tarefas dão o mesmo lucro o melhor é executar a que termina primeiro. Portanto, basta ordenar as tarefas pelo critério do maior lucro e no caso de empate ordene pelo critério da tarefa que termina primeiro. Para cada tarefa, começando com a que tenha o maior lucro, verifique o primeiro momento em que ela pode ser executada. Marque esse horário como utilizado para executar esta tarefa e contabilize seu lucro, siga para a próxima tarefa. Repita o processo até que tenha verificado todas as tarefas.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/f96480356cc94deac10e9687f0d00052 arrumandoAsTarefas.cpp %}


[uri-1704]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1704

