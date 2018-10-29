 <div id="maquina">
 
 </div>
## G - Máquina de Café

Resolva este problema:
[URI][uri-2670]{:target="_blank"}

<p align="justify">
A chave deste problema está em perceber que basta colocar a máquina de café em cada andar e computar o custo total de subidas/decidas de escada para o andar em que a mesma foi colocada. Suponha que no:
</p>

<p align="justify">
<b><i>1ª andar:</i></b> cada um dos <b>A<sub>2</sub></b> e <b>A<sub>3</sub></b> funcionários gastarão, respectivamente, <b>2</b> e <b>4</b> minutos. Portanto, um total de <b>2&centerdot;</b><b>A<sub>2</sub></b> <b>+</b> <b>4&centerdot;</b><b>A<sub>3</sub></b> minutos serão necessários;
 </p>
 
<p align="justify"> 
<b><i>2ª andar:</i></b> cada um dos <b>A<sub>1</sub></b> e <b>A<sub>3</sub></b> funcionários gastarão <b>2</b> minutos. Logo, um total de <b>2&centerdot;</b><b>A<sub>1</sub></b> <b>+</b> <b>2&centerdot;</b><b>A<sub>3</sub></b> minutos serão necessários;
</p>

<p align="justify">
<b><i>3ª andar:</i></b> cada um dos <b>A<sub>1</sub></b> e <b>A<sub>2</sub></b> funcionários gastarão, respectivamente, <b>4</b> e <b>2</b> minutos. Assim, um total de <b>4&centerdot;</b><b>A<sub>1</sub></b> <b>+</b> <b>2&centerdot;</b><b>A<sub>2</sub></b> minutos serão necessários;
</p>

<p align="justify">
A resposta será o menor tempo necessário das três opções citadas acima.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/c6b53bee1704820b50985930e7174aaa maquinaDeCafe.cpp %}

[uri-2670]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2670

