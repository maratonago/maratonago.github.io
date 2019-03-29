 <div id="macaco">
 
 </div>
## P1 - Macaco rural

Resolva este problema:
[SPOJ][spoj-MACACOMG]{:target="_blank"}

O problema pede para agrupar os <b>2n</b> produtos em <b>n</b> pares de forma tal que o custo do par mais caro seja minimizado. O custo de um par é a soma dos custos dos produtos que o compõem. Percebe-se que para minimizar o custo de um par, o produto mais caro deverá ser combinado(somado) com o produto mais barato, já que qualquer outra combinação irá resultar em uma soma maior ou igual. Em seguida, a próxima combinação mínima constituirá da soma do penúltimo produto mais caro com o segundo produto mais barato, depois o antepenúltimo com o terceiro e assim por diante até que não haja mais produtos para serem combinados. Tais combinações irão resultar nas menores somas possíveis. Desta forma, após computa-las, basta descobrir quais delas apresenta a maior soma. 

Um exemplo de implementação segue abaixo:

{% gist wellvolks/631e477b92755a3dbca7f6be94f79376 macaco.cpp %}

[spoj-MACACOMG]:		http://br.spoj.com/problems/MACACOMG/

Cabe a você
