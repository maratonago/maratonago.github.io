## Subcadeia interessante
<div id="subcadeia"></div>

Autor: Paulo Kataki

Para resolver esse problema basta ter algumas observações em relação a construção das cadeias interessantes. Por exemplo:

As cadeias com tamanho par, aa, aaab, aaaaab são cadeias interessantes. Podemos observar que todas têm pelo menos dois caracteres consecutivos iguais, no caso das três é “aa”. Ao se observar a cadeia abab só poderá se tornar interessante caso se tenha aaab, bbab, abaa ou abbb, isso ocorre porque a quantidade de a’s e b’s correspondem a exatamente a metade do tamanho da cadeia analisada, logo se quisermos deixar ela interessante, o número de algum desses dois caracteres deve ultrapassar a metade e então teremos pelo menos 1 caractere repetido seguido de outro.

Para as cadeias de tamanho ímpar a análise não muda muito. Por exemplo : em aba, ababa, abababa todas já pelo menos um caractere no caso o “a” com a quantidade superior a metade. Logo a verificação é olhar se têm dois caracteres iguais a uma distância 2.

A solução então é só varrer todos as posições da string s dada, e verificar se há pelo menos um posição i , tal que s[i] = s[i+1] , ou s[i] = s[i+2].

Um exemplo de implementação segue abaixo:

{% gist wellvolks/d2c412fa51b065613fff7cdc5aed969f subcadeia_kataki.cpp %}
