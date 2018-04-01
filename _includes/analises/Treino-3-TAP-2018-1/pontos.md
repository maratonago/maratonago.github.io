 <div id="pontos">
 
 </div>
## J - Pontos de Feno

Resolva este problema:
[URI][uri-1261]{:target="_blank"}

Uma das forma de resolver este problema de maneira eficiente é utilizando a estrutura de dados <a href="http://www.cplusplus.com/reference/map/map/"><b>map</b></a><b> < string, int > </b> para o dicionário. A chave será a palavra e o valor o total, em dólar, associado a tal palavra. Assim, a solução consiste em percorrer as palavras informadas e adicionar, caso a palavra lida esteja no dicionário, ao salário do funcionário.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/b8d91ad996e4fefc9ca64469cd5e1073 pontos.cpp %}


[uri-1261]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1261
