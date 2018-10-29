 <div id="telefone">
 
 </div>
 
## E - Telefone Sem Fio!

Resolva este problema:
[URI][uri-1448]{:target="_blank"}

<p align="justify">
O enunciado começa explicado como funciona a brincadeira do “telefone sem fio” com dois times. Nesse problema, devemos nos atentar aos critérios de desempate: 
</p>
<p align="justify">
 “<i>A equipe vencedora é aquela cuja frase final seja mais próxima da frase original. Para calcular a semelhança entre duas frases de mesmo comprimento você deve contar o número de vezes em que o caractere da frase do time coincide com o caractere da frase original. Ganha o time para o qual o número de coincidências seja máximo.</i> <b>Se os dois times empataram neste critério, a <font color="red"> primeira vez </font> que um dos times acertou e o outro errou decide.</b>”
</p>
<p align="justify">
Seja <b>FO</b>, <b>F1</b> e <b>F2</b> a frase original, a do primeiro e segundo time, respectivamente. Vamos percorrer a frase original, da esquerda para a direita, e comparar o caractere da posição atual com o caractere das fases dos times na mesma posição. Os quatros casos a seguir podem ocorrer ao compararmos: <b>I)</b> os caracteres são iguais;  <b>II)</b> apenas o caractere da frase do primeiro time difere do original; <b>III)</b> apenas o caractere da frase do segundo time difere do original; <b>IV)</b> ambos os caracteres diferem do original;
</p>
<p align="justify">
Apenas os <b>I</b>,<b>II</b> e <b>III</b> interferem na pontuação dos times. No caso <b>I</b> ambos recebem um ponto. No caso <b>II</b>, apenas o segundo time recebe um ponto e no caso <b>III</b> o primeiro é que recebe um ponto. Note-se que o critério de desempate leva em consideração a primeira ocorrência do caso <b>II</b> ou <b>III</b>. Portanto, se após percorrer a frase original e os times apresentam a mesma pontuação, basta verificar qual dos casos, <b>II</b> e <b>III</b>, ocorreu primeiro. Se for o caso <b>II</b> então o time 2 ganha, caso contrário o time 1 ganha. No entanto, se as pontuações dos times diferem, então o time que tiver a maior pontuação vence. 
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/5f4b2672c78a54cf317b952cc0508f64 telefone.c %}

[uri-1448]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1448
