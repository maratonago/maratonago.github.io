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

A solução mais intuitiva é responder a consulta do <b>Tipo 1</b> em <b>O(1)</b> e realizar um <b>DFS/BFS</b> para responder a constulta do <b>Tipo 2</b>. Essa última será respondinda em <b>O(Q*N)</b>, onde <b>Q</b> representa a quantidade de consultas. Como <b>Q*N</b> &le; <b>10<sup>10</sup></b> essa solução não vai passar no tempo limite de 3 segundos. 

Portanto, como responder a segunda consulta de forma eficiente? O primeiro passo é linearizar a árvore fornecida realizando um precurso em profundidade na mesma. À título de exemplo, suponha uma árvore com <b>N = 15</b> vértices, representada na Figura abiaxo, foi dada como entrada.

![Desenho representando a situação mostrada no enunciado](/_assets/images/tree.png){: .center-image }

O percurso em profundidade é mostrado na Figura abaixo.



<!--Um exemplo de implementação segue abaixo: -->

<!--{% gist wellvolks/468854028542097e55407afa7a403b2b guarda_costeira.cpp %}-->

