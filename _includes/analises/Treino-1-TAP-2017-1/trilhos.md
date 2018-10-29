<div id="trilhos">

</div>

## F - Trilhos

Resolva este problema:
[URI][uri-1062]{:target="_blank"}

<p align="justify">
Para cada comboio que chega da direção <b>A</b> continua na direção <b>B</b> com os vagões, reorganizados, de alguma forma.  A ordem que esses vagões chegam é sempre crescente <b>1,2,...,N</b>. Se um vagão entra na estação, ele só pode sair dela caso não tenha outro vagão na sua frente.  A única direção que um vagão, posicionado na estação, pode ir é para a direção <b>B</b>. Então dado uma sequência de vagões, o problema pede para verificar se é possível reproduzir tal sequência. Observe que a estação funciona como se fosse uma <b>pilha de vagões</b>, pois o último vagão que chega é o primeiro a sair, vamos denotar essa pilha de vagões por <b>P</b>. A sequência dada pode ser vista como uma <b>fila de vagões</b>, visto que devemos respeitar a ordem da sequência, vamos denota-la por <b>F </b>. 
</p>
<p align="justify">
Um comboio consiste de <b>N</b> vagões, para cada um deles, de <b> 1 até N </b>, verifique se o primeiro vagão em <b>F</b> é igual ao vagão que chegou, se for então o vagão segue na direção <b>B</b> e removemos o primeiro vagão de <b>F</b>. Caso contrário, verifique se existe algum vagão na estação, pois o mesmo pode ser o vagão que deveria sair agora. Se for então remova-o do topo de <b>P</b> e também remova o primeiro vagão de <b>F</b>. Se não for o vagão que deveria sair agora, então empilhe o vagão recém chegado em <b>P</b>.
</p>
<p align="justify">
Após a chegada de todos os vagões, a sequência fornecida é alcançável se <b>P</b> e <b>F</b> estiverem vazias, pois não sobrou nenhum vagão na estação e a fila de vagões que saíram na direção <b>B</b> foi respeitada, portanto saída deve ser <b>Yes</b>. Caso contrário, a sequência não é alcançável e a saída deve ser <b>No</b>.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/e85c8aff230c36af931381ce30378c7c trilhos.cpp %}

[uri-1062]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1062
