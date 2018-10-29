 <div id="christmas">
 
 </div>
## B - Christmas Lights

Resolva este problema:
[URI][uri-2718]{:target="_blank"}

<p align="justify">
Devemos nos atentar a duas informações importantes fornecidas. A primeira consiste na quantidade máxima de lâmpadas em um grupo (<b>50</b>). Já a segunda está presente na seguinte frase: <b><i>[...] decidiu pensar neles efetivamente como números e escreveu as representações decimais desses binários [...]</i></b>. Ou seja, ela irá fornecer <b>N</b> números decimais representando a quantidade de lâmpadas em cada grupo, números estes que terão valores entre <b>0</b> e <b>2<sup>50</sup></b>, inclusive. Definido um tipo de dado que suporte tais valores, basta contar a quantidade de <b>1’s</b> consecutivos em cada valor e, para isso, podemos utilizar <a href=" https://en.wikipedia.org/wiki/Bitwise_operation"><i>bitwise operations</i></a>. 
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/05d323eb7b300f2c79cf6bfb43fceb53 christamasLights.cpp %}

[uri-2718]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2718
