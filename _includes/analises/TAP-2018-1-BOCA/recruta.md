 <div id="recruta">
 
 </div>
## B1 - Recruta militar


O problema pede para que, dado um conjunto de locais e as possíveis conexões entre tais locais, ajude João a encontrar o <b>K<sub>th</sub></b> menor distância entre esses pares de locais de forma que tal escolha ocorra com probabilidade mínima <b>p</b>.

O primeiro ponto que deve-se observar é que será necessário computar as distâncias mínimas entre todos os pares de locais. Para essa tarefa pode-se utilizar o algoritmo de <b>Floyd-Warshall</b>, uma vez que o número de locais é 100 e as distâncias entre as possíveis conexões e dado como uma matriz de adjacência. O segundo ponto é que será necessário ordenar as distâncias mínimas calculadas, já que será necessário encontrar a <b>K<sub>th</sub></b> delas. 

Seja <b>S</b> o conjunto de distâncias mínimas entre todos os pares, segundo o enunciado a probabilidade de escolher uma dessas distâncias é igualmente provável, ou seja, <b>1/S</b>.Desta forma, a probabilidade de qualquer distância mínima entre a primeira e a <b>K<sub>th</sub></b> será <b>K<sub>th</sub>/S</b>. Deseja-se que <b>K<sub>th</sub>/S</b> seja pelo menos <b>p</b>, portanto, <b>K<sub>th</sub>/S</b> &ge; <b>p</b>, simplificando, <b>K<sub>th</sub></b> &ge; <b>p * S</b>. Como é pedido a menor dentre as distâncias mínimas possíveis, então chega-se que a resposta será a distância mínima que esteja na posição <b>K<sub>th</sub></b> = &lceil;<b>p * S</b>&rceil;-1, o teto é para definir uma posição inteira, ou seja, se cair na posição <b>4,02</b> na verdade será a posição <b>5</b>. O <b>-1</b> é necessário porque o vetor que armazena as distâncias mínimas é indexado de <b>0</b>.


Um exemplo de implementação segue abaixo:

{% gist wellvolks/1023b56b8458a102a69fcc7a28ba8872 recruta.cpp %}

