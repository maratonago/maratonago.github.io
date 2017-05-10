
## H - Pontos de Feno

Resolva este problema:
[URI][uri-1261]{:target="_blank"}

<p align="justify">
O problema lhe fornece um dicionário <b>Hay Point</b> que contém algumas palavras-chaves e um valor, em dólares americanos, associado a cada uma dessas palavras-chaves. O salário de um funcionário é calculado através  da soma do valor de todas as palavras que aparecem na descrição do cargo deste funcionário. O problema pede que você compute, para cada funcionário, o valor deste salário.  Esse problema é um excelente reposta para a pergunta: “OK! Aprendi como utilizar <b>Map</b> da STL, mas qual problema eu posso praticar?” O contêiner <b>Map</b> da <a href="http://www.geeksforgeeks.org/the-c-standard-template-library-stl/"> STL </a>, em suma, são contêineres associativos que armazenam elementos de forma mapeada. Cada elemento tem um valor de chave e um valor mapeado. Não existem dois valores mapeados que tenham os mesmos valores de chave.
</p>
<p align="justify">
Seja  <b>M&lt;string,int&gt; </b> um <b>Map</b> composto pela chave  e valor do tipo <b>string</b> e <b>int</b>, respectivamente, e <b>S</b> uma variável que irá armazena o salário do funcionário. O primeiro passo é inserir todas as palavras-chaves do dicionário e seus respectivos valores em <b>M</b>. O passo seguinte consiste em, para cada palavra da descrição caso a mesma esteja em <b>M</b>, somar o valor associado em <b>S</b>: <b> S = S + M[ palavra ]</b>. Após processar uma descrição da entrada, basta imprimir o valor de <b>S</b>.
</p>
<p align="justify">
“Certo, mas se eu não programo em C++ devo pular esse problema?” Não meu(minha) jovem. Em <b>Java</b> temos o <a href=”http://www.geeksforgeeks.org/hashmap-treemap-java/”> HashMap</a>. “Mas em C ?” Nesse caso é quando você chora e mãe não ouve =). Brincadeiras à parte, as seguintes abordagens, independente da linguagem, podem ser implementadas:
</p>
<p align="justify">
<b>Força bruta:</b> os valores <b>N</b>, <b>M</b> e <b>K</b> são pequenos, <b>K</b> representa o tamanho da palavra. Portanto uma abordagem com complexidade <b>O(N*M*K)</b> é aceita. Nesta abordagem, podemos armazenar cada palavra-chave em um vetor e para cada palavra da descrição fazemos uma busca linear nesse vetor, se encontrarmos a palavra no vetor adicionamos à <b>S</b> o valor dela, caso contrário adicionámos o valor <b>0</b>.
</p>
<p align="justify">
<b>Busca binária:</b> podemos diminuir a complexidade da abordagem anterior se ordenarmos  o vetor com as palavras-chaves e ao invés da busca linear, aplicarmos uma <a href=”http://www.geeksforgeeks.org/binary-search/”>busca binária</a>.
</p>
<p align="justify">
<b>Árvore Trie:</b> a <a href=” http://www.geeksforgeeks.org/trie-insert-and-search/”>Trie</a> é uma estrutura de dados de recuperação rápida: <i>re<b>trie</b>val</i>. A complexidade de inserção, remoção e pesquisa são todos na ordem de <b>O(K)</b>. Portanto, podemos inserir todas as palavras-chaves em uma <b>Trie</b> com complexidade <b>O(N*|palavra|)</b> e para cada palavra da descrição pesquisamos se a mesma está presente na <b>Trie</b>, se estiver adicionamos o valor desta palavra à <b>S</b>. 
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/644fc2c93b543ae7472c97b24ef96934 pontos_de_feno.cpp %}


[uri-1261]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1261
