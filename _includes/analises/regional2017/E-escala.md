
## E - Escala Musical   

Resolva este problema:
[URI][uri-2662]{:target="_blank"}

Para começar, simplificamos a entrada, transformando cada uma das notas da música na nota básica correspondente.
Cada uma das 12 notas básicas pode ser usada para definir um tom maior.
Cada tom maior é composto por 7 notas, que podem ser encontradas seguindo o padrão descrito no enunciado do problema.
Para verificar se a música está ou não em um tom maior devemos conferir se todas as notas que aparecem na música fazem parte do mesmo.
Isso quer dizer que nem sequer precisamos armazenar todas as notas da música, basta marcar quais notas foram vistas.
Podemos então testar cada uma das notas básicas, em ordem, como base para o tom maior, imprimindo assim que encontramos o primeiro tom maior em que a música se encontra ou _desafinado_ caso a música não esteja em nenhum tom maior.

Um exemplo de implementação segue abaixo:

{% gist paulocezar/8d317179d662fbb9407bd84ef8285520 E.py %}


[uri-2662]:     https://www.urionlinejudge.com.br/judge/pt/problems/view/2662

