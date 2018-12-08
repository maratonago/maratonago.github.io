## G - Campeonato de arco e flecha
<div id="campeonato"></div>

Autor: <font color = "blue">Welton Cardoso</font>

Resolva este problema: [Hackerrank][hackerrank-g]{:target="_blank"}

O problema pede para que seja desenvolvido um programa que seja capaz de processar duas consultas:

<ul>
  <li><b>A1 a</b>: O competidor alvejou um círculo com área <b>a</b>. Informe a pontuação obtida por ele.</li>
  <li><b>2 a v</b>: A organização alterou o valor do círculo com área <b>a</b> para o valor <b>v</b>.</li>
</ul>

Percebe-se que se fosse apenas a primeira consulta o problema seria mais simples. Uma vez que bastaria manter o acumulado do primiero círculo até o último círculo. Ou seja, cada círculo já teria a pontuação computada o que permitiria responder a consulta em **O(1)**. No entanto, a segunda consulta modifica o valor associado a um determinado círculo, por conseguinte, torna-se necessário atualizar o acumulado dos círculos posteriores com área maior.

Essa atualizaçao apresenta complexidade, no pior caso, <b>O(Q &middot; N)</b>. Como o enunciado informa que a quantidade de consultas do tipo **2 a b** será menor ou igual ao min{100, Q}, tem-se a complexidade <b>O(100 &middot; 100000)</b> o que é suficiente para passar no tempo. Certo, consegue-se então atualizar toda vez os acumulados dos círculos, mas e a primeira consulta? Aqui, pode-se utilizar uma busca binária para descobrir a posição do círculo com área **a**. O porquê da necessidade da busca binária pelo fato de não ser possível acessar um círculo em um vetor diretamente pela sua área. Por exemplo, suponha um vetor **vet** e **3** círculos com as respectivas áreas **100**, **150** e **1000000000**. É possível associar os dois primeiros círculos a uma posição de **vet** (**vet[100]** e **vet[150]**), já o terceiro não é possível uma vez que não é disponibilizada memória suficiente para tal alocação (**vet[1000000000]**). 

Para exemplificar a solução olhe para o primeiro caso de teste:

![Entrada](/_assets/images/in.PNG){: .center-image }

Sera necessário marmzenar as informações dos círculos e o acumulado das pontuações em vetores. Os vetor **Área**, **Pontuação** e **Acumulado** serão esses vetores. Note-se que o vetor **Área** contém os valores da entrada de forma ordenada. Tal ordenação é necessária para que a busca binária possa ser realizada. 

![e1](/_assets/images/camp1.png){: .center-image }

A primeira consulta, **1 2**, deseja descobrir a pontuação após acertar o círculo com área **2**. Assim, faz-se necessário realizar uma busca binária no vetor **Área** para descobrir em qual posição está o círculo com área **2**. Tal busca irá retornar a posição **1** do vetor **Área** (haja visto que a áera **2** está na posição **1**). Assim, pode-se imprimir o valor associado à posição **1** do vetor **Acumulado**, que no caso será **1**.

![e2](/_assets/images/camp3.png){: .center-image }

A segunda consulta é do mesmo formato que a primeira, logo, após a busca binária, descubrirá-se que o círculo com área **20** se encontra na posição **3** do vetor **Área**. Portanto, a respota está na posição **3** do vetor **Acumulado**, que no caso será **-4**.

![e3](/_assets/images/camp2.png){: .center-image }

A terceira consulta é do segundo tipo. Ou seja, ao atualizar o valor da pontuação associado ao círculo com área **12** para **10** será necessário atualizar o vetor **Acumulado**. Tal área se encontra na posição **2** do vetor **Área**, logo o vetor **Acumulado** na posição **2** deverá ser atualizado para **Acumulado[2] = Acumulado[1] + 10**. De forma análoga, a posição **3** para **Acumulado[3] = Acumulado[2] + (-10)**.

![e4](/_assets/images/camp6.png){: .center-image }

As demais consultas podem ser respondidas da mesma forma que as duas primeiras consultas foram.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/22d77a6af4a78f5cfe2497f86e62c9ed welton_campeonato.cpp %}

[busca binária]: https://www.geeksforgeeks.org/binary-search/
[hackerrank-g]: https://www.hackerrank.com/contests/2-competicao-de-programacao-infufg-20182/challenges/campeonato-de-arco-e-flecha
