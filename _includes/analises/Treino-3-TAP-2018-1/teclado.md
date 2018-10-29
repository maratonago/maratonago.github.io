 <div id="teclado">
 
 </div>
## E - Teclado Quebrado

Resolva este problema:
[URI][uri-1451]{:target="_blank"}

A solução deste problema torna-se muito elegante e simples quando olhamos para a sequência digitada como uma lista de caracteres. Sendo assim, utilizaremos uma <a haref="http://www.cplusplus.com/reference/list/list/"><b>list</b></a> de <b>char</b> e um <a href="http://www.cplusplus.com/reference/iterator/"><b>iterator</b></a> para o final da mesma (vamos chamar de <b>it</b> para efeito de explicação). Desta forma, quando o usuário digitar <b>'['</b> faça <b>it = lista.begin()</b>, caso digite <b>']'</b> faça <b>it = lista.end()</b>. Se uma letra for digitada insira a mesma na lista na posição onde o iterator está "apontando", ou seja, <b>lista.insert(it, caractere_digitado)</b>. No final basta imprimir a lista com os caracteres, simples e eficiente =).

Um exemplo de implementação segue abaixo:

{% gist wellvolks/af7dbe3e85b2ec938488fa1667c5904c teclado.cpp %}

[uri-1451]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1451
