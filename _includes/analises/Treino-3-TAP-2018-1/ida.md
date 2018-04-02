 <div id="ida">
 
 </div>
## G - Ida à Feira

Resolva este problema:
[URI][uri-1281]{:target="_blank"}

Este problema também pode ser resolvido com uma busca linear no vetor com os preços para cada item que deseja comprar. No entanto, uma forma mais eficiente é armazenar os itens, juntamente com os preços, em uma estrutura de dados <a href = "http://www.cplusplus.com/reference/map/map/"><b>map</b></a><b> < string, double > </b>. Ou seja, para cada nome (chave) de um item associamos ao seu custo (valor). Basta percorrer a lista de compras e ir computando o custo total da compra.  

Um exemplo de implementação segue abaixo:

{% gist wellvolks/5bc3e63585b6fc2f007e621e09a16cc9 ida.cpp %}


[uri-1281]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1281
