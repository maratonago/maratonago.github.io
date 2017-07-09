<div id="convidado">

</div>

## O convidado

<p align="justify">

</p>
<p align="justify">
O problema consiste em dado uma árvore e os valores inteiros associados a cada nó da mesma, o seu programa deverá ser capaz de  processar dois tipos de consultas:
<p style="margin-left:2cm;" align="justify" > <b>Tipo 1:</b> dados <b>i</b> e <b>j</b>, fazer a atribuição <b>x[i] = y</b>;</p>
<p style="margin-left:2cm;" align="justify" > <b>Tipo 2:</b> dados <b>i</b> e <b>y</b>, imprimir a quantidade <b>M</b> de vértices da subárvore de <b>i</b> que tenha valor <b>x[j]</b> &le; y, onde o vértice <b>j</b> pertence à subárvore de <b>i</b>.
</p>
<p align="justify">
A solução mais intuitiva é responder a consulta do <b>Tipo 1</b> em <b>O(1)</b> e realizar um <b>DFS/BFS</b> para responder a constulta do <b>Tipo 2</b>. Essa última será respondinda em <b>O(Q*N)</b>, onde <b>Q</b> representa a quantidade de consultas. Como <b>Q*N</b> &le; <b>10<sup>10</sup></b> essa solução não vai passar no tempo limite de 3 segundos. Portanto, como responder a segunda consulta de forma eficiente? O primeiro passo é linearizar a árvore fornecida realizando um percurso em profundidade nela. À título de exemplo, suponha uma árvore com <b>N = 15</b> nós, representada na Figura abiaxo.
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/tree.png" class="center-image"></p>

<p>&nbsp;</p>

<p align="justify">
O processo de linearização é ilustrado na Figura abaixo. Note que cada nó <b>v</b> da árvore agora é mapeado para um valor <font color="blue"> <b>x</b> </font>, esse valor é o tempo de descoberta do nó.
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/percurso.png" class="center-image"></p>

<p>&nbsp;</p>

<p align="justify">
Aproveitando o percurso em profundidade, vamos armazenar também o tamanho da subárvore de cada nó da árvore. Essa quantidade é representada por <font color="green"> <b>y</b> </font> na Figura a seguir.
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/sub.png" class="center-image"></p>

<p>&nbsp;</p>


<p align="justify">
Com o mapeamento e a quantidade de nós na subárvore de cada nó calculados, podemos representar uma subárvore de um nó <b>v</b> como um intervalo. Por exemplo, o nó <b>11</b> foi mapeado para <b><font color="blue">x</font> [ 11 ] = 2</b> e contém <b><font color="green">y</font> [ 11 ] = 7</b> nós na sua subárvore. Portanto, o intervalo <b>[ <font color="blue">x</font>[ 11 ], <font color="blue">x</font>[ 11 ] + <font color="green">y</font>[ 11 ] - 1 ] = [ 2, 2 + 7 - 1 ] = [ 2, 8 ]</b> pode representar tal subárvore. O restante dos intervalos são mostrados na Figura abaixo. Note-se que cada intervalo é definido em cima do mapeamento reaizado, ou seja, não estão relacionados diretamente com o número do nó em si, mas sim com o valor do seu mapeamento. 
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/range.png" class="center-image"></p>

<p>&nbsp;</p>
<p align="justify">
O valores calculados até então podem ser armazenados em vetores:
  
<p style="margin-left:2cm;" align="justify" > <b>id_v :</b> armazena os valores dos mapeamentos <b><font color="blue">x</font></b>;
<p style="margin-left:2cm;" align="justify" > <b>id_r :</b> armazena o mapeamento reverso dos nós, ou seja, se <b> id_v[ v ] = w</b> então <b>id_r[ w ] = v</b>; 
<p style="margin-left:2cm;" align="justify" > <b>sub_sz :</b> armazena os tamanhos das subárvores de cada nó mapeado <b><font color="green">y</font></b>;

A Figura abaixo ilustra tais vetores.

<p>&nbsp;</p>

<p><img src="/_assets/images/vetores.png" class="center-image"></p>

<p>&nbsp;</p>

<p align="justify">
Como a árvore linearizada e "dividida" em intervalos, podemos utilizar a técnica <a href="http://www.geeksforgeeks.org/sqrt-square-root-decomposition-technique-set-1-introduction/">SQRT-Decomposition</a> para responder a consulta do <b>Tipo 2</b> em <b>O(Q*(N/&radic;N + &radic;N * lg( N/&radic;N)))</b>. Essa técnica é relativamente simples de ser compreendida e deixo como exercício. 
</p>

<p align="justify">
O valor de <b>&lfloor;&radic;15&rfloor; = 3</b>, note-se que <b>15</b> é divisível por <b>3</b>. Como <b>N</b> pode não ser divisível por <b>&lfloor;&radic;15&rfloor;</b>, então vamos considerar, para esse exemplo, o tamanho do bloco igual a <b>4</b> para que possamos mostrar como tratar tal caso. Para acessar o bloco correto, dado um nó, basta realizar a seguinte operação de divião <b> &lfloor;(id_v[ no ] - 1) / 4&rfloor;</b>. Já a posição dentro do bloco, basta descobrir o resto da divisão <b>(id_v[ no ] - 1) % 4</b>. Quando o valor de <b>&lfloor;&radic;15&rfloor;</b> não dividir <b>N</b>, basta completar o último bloco com um valor bem alto, por exemplo <b>1e9</b>, desta forma esses valores não vão influênciar na resposta. 
</p>

<p align="justify">
Seja <b>vet_s</b> uma matriz com <b>&lceil;N/&lfloor;&radic;15&rfloor;&rceil;</b> linhas e <b>&lfloor;&radic;15&rfloor;</b> colunas que armazena os valores de cada nó em blocos. Perceba que estamos considerando o tamanho do bloco igual a <b>4</b>, logo <b>vet_s</b> terá <b>&lceil;15/4&rceil; = 4</b> linhas e <b>4</b> colunas. O próximo passo é ordenar cada bloco/linha dessa matriz. Para simplificar a islustrações a seguir, considere que cada bloco/linha da matriz <b>vet_s</b> foi concatenada uma na frente da outra, formando um vetor. A Figura a seguir ilustra a matriz <b>vet_s</b> com os valores nos blocos já ordenados.
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/blocos.png" class="center-image"></p>

<p>&nbsp;</p>

<b><font color="blue">Consulta do Tipo 1</font></b>

<p align="justify" >
Vamos supor a seguinte consulta do Tipo 1, <b>atualizar ( no, valor_antigo, valor_novo )</b>, uma atualização do valor do nó <b>no</b> com o valor <b>valor_novo</b>, o <b>valor_antigo</b> é o valor atual do nó, ou seja, <b>valores[ no ]</b>. Seja <b>i</b> o índice do bloco do nó <b>no</b> e <b>j</b> a posição dentro desse bloco. A objeitvo é autalizar o vetor <b>valores</b> e a matriz <b>vet_s</b>. O primeiro é alcançado fazendo a seguinte atribuição <b>valores[ no ] = valor_novo</b>, já o segundo devemos encontrar o valor <b>valor_antigo</b> dentro do bloco, uma busca linear no bloco então e realizado. Encontrado um valor <b>valor_antigo</b>, basta atualiza-lo com o valor <b>valor_no</b>. Devemos manter o bloco ordenado para que a consulta do <b>Tipo 2</b> possa ser realizada corretamente. Nesse ponto, após a troca, três casos podem ocorrer:
</p>

<p style="margin-left:2cm;" align="justify" ><b>O valor da posição j-1 é maior que o valor_novo:</b> nesse caso basta trocar o valor de <b>vet_s[ i ][ j ]</b> com <b>vet_s[ i ][ j - 1 ]</b>, então o valor de <b>j</b> deve ser decrementado e o processo é repetido enquanto <b>j-1 &re; 0</b> e <b>vet_s[ i ][ j-1 ] > vet_s[ i ][ j ]</b.

<p style="margin-left:2cm;" align="justify" ><b>O valor da posição j+1 é menor que o valor_novo:</b> nesse caso basta trocar o valor de <b>vet_s[ i ][ j ]</b> com <b>vet_s[ i ][ j + 1 ]</b>, então o valor de <b>j</b> deve ser incrementado e o processo é repetido enquanto <b>j+1 &le; 4</b> e <b>vet_s[ i ][ j + 1 ] < vet_s[ i ][ j ]</b.

<p style="margin-left:2cm;" align="justify" ><b>Se nenhum dos casos anteriores forem sastifeitos:</b> nesse caso não será necessário deslocar o <b>valor_novo</b>, visto que o bloco já está ordenado.

<p align="justify" >
Um exemplo de atualização é mostrado no Gif abaixo.
</p>

<p>&nbsp;</p>

<p><img src="/_assets/images/update_v2.gif" class="center-image"></p>

<p>&nbsp;</p>

<b><font color="blue">Consulta do Tipo 2</font></b>



<!--Um exemplo de implementação segue abaixo: -->

<!--{% gist wellvolks/468854028542097e55407afa7a403b2b guarda_costeira.cpp %}-->

