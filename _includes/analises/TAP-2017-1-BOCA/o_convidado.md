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

![a](/_assets/images/tree.png)

O processo de linearização é ilustrado na Figura abaixo. Note que cada nó <b>v</b> da árvore agora é mapeado para um valor <font color="blue"> <b>x</b> </font>.

![b](/_assets/images/percurso.png)

Aproveitando o percurso em profundidade, vamos armazenar também a quantidade de nós na subárvore de nó da árvore. Essa quantidade é presentada por <font color="green"> <b>y</b> </font> na Figura a seguir.

![c](/_assets/images/sub.png)


<!--Um exemplo de implementação segue abaixo: -->

<!--{% gist wellvolks/468854028542097e55407afa7a403b2b guarda_costeira.cpp %}-->

