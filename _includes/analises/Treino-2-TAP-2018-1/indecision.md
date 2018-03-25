 <div id="indecision">
 
 </div>
## D - Indecision of Reindeers

Resolva este problema:
[URI][uri-2721]{:target="_blank"}

<p align="justify">
Este problema pode ser resolvido simulando a pilha de bolas de neve, no entanto existe outra forma mais simples de resolve-lo. Seja <b>S</b> o total de bolas, como cada Rena irá retirar uma bola do topo da pilha e existem <b>9</b> Renas, então cada uma delas irá retirar, pelo menos, <b>S/9</b> bolas. A quantidade de bolas que sobrará, depois que cada uma retirar <b>S/9</b> bolas, será menor que 9. Logo, precisamos saber apenas o valor do resto da divisão de <b>S</b> por <b>9</b>, este valor representará uma Rena (<b>nomes[S % 9]</b>, onde <b>nomes[]</b> é o vetor dos nomes das Renas dado). <b>OBS:</b> <b>S % 9</b> nos dará a próxima Rena que irá retirar uma bola, mas o problema pede a última Rena que retirou uma bola. Para resolver, podemos fazer <b> ((S-1)+9) % 9 </b> ou basta deslocar o vetor dos nomes uma posição para a direita. 
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/bf358911fab97f1bfb2d872f8e750948 indecisaoDasRenas.cpp %}


[uri-2721]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2721

