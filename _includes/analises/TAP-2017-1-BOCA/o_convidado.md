<div id="convidado">

</div>

## O convidado

<p align="justify">

</p>
<p align="justify">
O problema consiste em dado uma árvore e os valores associados a cada nó da mesma, o seu programa deve processar dois tipos de consultas:
<p style="margin-left:2cm;" align="justify" > <b>Tipo 1:</b> dados <b>i</b> e <b>j</b>, fazer a atribuição <b>x[i] = y</b>;</p>
<p style="margin-left:2cm;" align="justify" > <b>Tipo 2:</b> dados <b>i</b> e <b>y</b>, imprimir a quantidade <b>M</b> de vértices da subárvore de <b>i</b> que tenha valor <b>x[j]</b> &le; y, onde o vértice <b>j</b> pertence à subárvore de <b>i</b>.
</p>
<p align="justify">
A solução mais intuitiva é responder a consulta do <b>Tipo 1</b> em <b>O(1)</b> e realizar um <b>DFS/BFS</b> para responder a constulta do <b>Tipo 2</b>. Essa última será respondinda em <b>O(Q*N)</b>, onde <b>Q</b> representa a quantidade de consultas. Como <b>Q*N</b> &le; <b>10<sup>10</sup></b> essa solução não vai passar no tempo limite de 3 segundos. 
</p>
<p align="justify">
Portanto, como responder a segunda consulta de forma eficiente? O primeiro passo é linearizar a árvore fornecida realizando um precurso em profundidade na mesma. À título de exemplo, suponha uma árvore com <b>N = 15</b> vértices, representada na Figura abiaxo, foi dada como entrada.
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/tree.png" class="center-image"></p>

<p>&nbsp;</p>

O processo de linearização é ilustrado na Figura abaixo. Note que cada nó <b>v</b> da árvore agora é mapeado para um valor <font color="blue"> <b>x</b> </font>.

<p>&nbsp;</p>

<p><img src="/_assets/images/percurso.png" class="center-image"></p>

<p>&nbsp;</p>

Aproveitando o percurso em profundidade, vamos armazenar também a quantidade de nós na subárvore de cada nó da árvore. Essa quantidade é representada por <font color="green"> <b>y</b> </font> na Figura a seguir.

<p>&nbsp;</p>

<p><img src="/_assets/images/sub.png" class="center-image"></p>

<p>&nbsp;</p>

Com o mapeamento e a quantidade de nós na subárovre de cada nó da árvore calculados, podemos representar uma subárvore de um nó <b>v</b> como um intervalo. Por exemplo, o nó <b>11</b> foi mapeado para <b><font color="blue">x</font> [ 11 ] = 2</b> e contém <b><font color="green">y</font> [ 11 ] = 7</b> nós na sua subárvore. Portanto, o intervalo <b>[ <font color="blue">x</font>[ 11 ], <font color="blue">x</font>[ 11 ] + <font color="green">y</font>[ 11 ] - 1 ] = [ 2, 2 + 7 - 1 ] = [ 2, 8 ]</b> pode representar tal subárvore. O restante dos intervalos é mostrado na Figura abaixo. Note-se que cada intervalo é definido em cima do mapeamento reaizado, ou seja, não está relacionado diretamente como valor do nó em si, mas sim com o valor do seu mapeamento. 

<p>&nbsp;</p>

<p><img src="/_assets/images/range.png" class="center-image"></p>

<p>&nbsp;</p>

O valores calculados até então podem ser armazenados em vetores. Seja <b>id_v</b> o vetor que armazena os valores dos mapeamentos <b><font color="blue">x</font></b>, <b>sub_sz</b> o vetor que armazena os tamanhos <b><font color="green">y</font></b> das subárvores de cada nó mapeado e o vetor <b>valores</b> que armazena os valores fornecidos na entrada. Note-se que o vetor <b>valores</b> leva em consideração o mapeamento realizado, ou seja, o acesso ao valor de um nó <b>v</b> e realizado da seguinte forma: <b>valores [ id_v[ v ] ] </b>. Os indíces serão coloridos de azul para que não esqueça =). A Figura a seguir ilustra tais vetores.

<p>&nbsp;</p>

<p><img src="/_assets/images/vetores.png" class="center-image"></p>

<p>&nbsp;</p>

Como a árvore linearizada e "dividida" em intervalos, podemos utilizar a técnica <a href="http://www.geeksforgeeks.org/sqrt-square-root-decomposition-technique-set-1-introduction/">SQRT-Decomposition</a> para responder a consulta do <b>Tipo 2</b> em <b>O(Q*(N/&radic; + &radic;N * lg( N/&radic; )))</b>. Essa técnica é relativamente simples de ser compreendida e deixo como exécicio. 

O valor de <b>&lfloor;&radic;15&rfloor; = 3</b>, note-se que <b>15</b> é divisível por <b>3</b>. Como nem sempre <b>N</b> será divisível por <b>&lfloor;&radic;15&rfloor;</b>, então vamos considerar, nesse exemplo, o tamanho do bloco igual a <b>4</b> para que possa mostrar como tratar tal caso. Seja <b>id_b</b> o vetor que armazena o valor do bloco de cada nó da árvore e <b>vet_s</b> uma matriz com <b>&lceil;N/&lfloor;&radic;15&rfloor;&rceil;</b> linhas e <b>&lfloor;&radic;15&rfloor;</b> colunhas que armazena os valores de cada nó. Note-se que estamos considerando o tamanho do bloco igual a <b>4</b>, logo <b>vet_s</b> terá <b>&lceil;15/4&rceil; = 4</b> linhas e <b>4</b> colunas. Para simplificar as figuras a seguir, considere que cada linha da matriz <b>vet_s</b> foi concatenada uma na frente da outra, formando um vetor. Quando o valor de <b>&lfloor;&radic;15&rfloor;</b> não dividir <b>N</b>, basta completar o último bloco com um valor bem alto, por exemplo <b>1e9</b>, desta forma esses valores não vão influênciar na resposta. O próximo passo é ordenar cada linha (bloco) do vetor <b>vet_s</b>. A Figura a seguir  ilustra os vetores <b>id_b</b> e <b>vet_s</b>, esse último já com os blocos ordenados.

<p>&nbsp;</p>

<p><img src="/_assets/images/blocos.png" class="center-image"></p>

<p>&nbsp;</p>

<!--Um exemplo de implementação segue abaixo: -->

<!--{% gist wellvolks/468854028542097e55407afa7a403b2b guarda_costeira.cpp %}-->

