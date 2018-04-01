<div id="gerente">
</div>
## H - Gerente de Espaço

Resolva este problema:
[URI][uri-1369]{:target="_blank"}

O problema não é difícil, mas sim trabalhoso. O problema consiste em simular três operações em um disco com tamanho <b>D</b> (<b>Kb</b>, <b>Mb</b> ou <b>Gb</b>). A primeira operação  <b>insere</b> um arquivo com identificador <b> NOME </b>. Aqui vale ressaltar o fato de como esse arquivo de ser inserido: <b><i>  Um arquivo é sempre armazenado em um bloco de células de armazenamento contíguas. O arquivo a ser inserido deve ser sempre colocado no início do <font color = "red" > menor bloco livre </font> cujo tamanho é maior ou igual ao tamanho do arquivo. Se mais de um bloco livre é igualmente adequado, escolha o <font color = "red" >mais próximo do começo do disco</font></i></b>. Portanto, o arquivo não deve ser inserido no primeiro bloco livre que caiba o mesmo, mas sim, dentre todos os blocos que o comporta, no que tenha o menor tamanho e caso exista mais de um bloco com tal tamanho devemos escolher o que está mais perto do começo do disco.  Já a segunda operação <b>remove</b> um arquivo com identificador <b>NOME</b>. Por fim, a terceira operação <b>otimiza</b> o disco, realocando os arquivos para o inicio do disco mas mantendo a ordem dos mesmos. 

Observados as operações disponíveis, a primeira sugestão é trabalhar com o tamanho do disco em <b>Kb</b>, pois desta forma facilitará a manipulação dos blocos e da impressão da descrição do disco após as operações. As seguintes estruturas foram utilizadas:

{% gist wellvolks/518090303067210ca2cfad8cbf88fd2a  estruturaBloco.cpp %}

Para representar o disco pode-se utilizar a estrutura de dados <a href = "http://www.cplusplus.com/reference/list/list/"> <b>list</b> </a> composta por outra estrutura <b>bloco</b>. Esta última é composta pelas variáveis: <b>tam</b> que representa o tamanho do bloco; <b>tipo</b> que armazena o tipo do bloco (LIVRE ou OCUPADO); e <b>nome</b> que mantem salvo o nome do arquivo que está armazenado no bloco em questão. A estrutura de dados <a href="http://www.cplusplus.com/reference/map/map/"><b>map</b></a>, representado por <b>arquivos</b>, é utilizada com o intuito de acelerar a segunda operação (remoção), uma vez que a mesma mantem um "ponteiro" para o bloco cujo o arquivo está armazenado, por conseguinte a remoção torna-se direta, já que não há a necessidade de percorrer todo o <b>hd</b> procurando o arquivo a ser removido.

Antes de explicar em mais detalhes a solução vamos simular as três operações através de um caso de teste. Assim ficará mais simples de entender a solução empregada. Tal caso de teste é apresentado a seguir:

{% gist wellvolks/63e277f25b536cd5cbbef1fdcc4fb0cc  teste.in %}

O primeiro passo é converter a unidade do disco de <b>8Mb</b> para <b>8192Kb</b>. No inicio o <b>hd</b> tem um único bloco livre com o tamanho da sua capacidade:

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/Hd_1.png ){:height="461px" width="1053px" .center-image}

A primeira operação é do tipo <b>insere</b>. Deseja-se inserir o arquivo <b>arq0001</b> de tamanho <b>4096Kb</b> (<b>4Mb</b>). Tal operação é possível uma vez que <b>hd</b> existe um bloco livre de tamanho <b>8192Kb</b>.

![Inserção do arquivo arq0001](/_assets/images/Hd_2.png){:height="461px" width="1053px" .center-image}

O <b>hd</b> agora tem dois blocos, o primeiro e o segundo de tamanho <b>4096Kb</b>, mas o primeiro contendo o arquivo <b>arq0001</b> e o segundo livre. Observe que agora o mapa <b>arquivos</b> tem um "ponteiro" do arquivo <b>arq0001</b> para o bloco no qual foi alocado. De forma análoga, a próxima operação é realizada:

![Inserção do arquivo arq0002](/_assets/images/Hd_3.png){:height="461px" width="1053px" .center-image}

A seguinte também:

![Inserção do arquivo arq0003](/_assets/images/Hd_4.png){:height="461px" width="1053px" .center-image}

A próxima operação é de remoção, como já é sabido o bloco cujo o arquivo <b>arq0001</b> está alocado a operação pode ser realizada diretamente. Agora um novo bloco com tamanho <b>4096Kb</b> está livre (a próxima operação é ignorada já que o arquivo não está alocado no <b>hd</b>):

![Remoção do arquivo arq0001](/_assets/images/Hd_5.png){:height="461px" width="1053px" .center-image}

A próxima operação válida é de inserção, mas não há espaço em disco para o arquivo <b>arq0001</b>. Seguindo as instruções do enunciado do problema, uma operação de otimização deve ser realizada. O <b>hd</b> então ficará dessa forma:

![Estado do hd após otimização](/_assets/images/Hd_6.png){:height="461px" width="1053px" .center-image}

Note a mágica dos "ponteiros" ocorrendo =). Com um bloco livre de tamanho <b>6656Kb</b> o arquivo <b>arq0001</b> com tamanho <b>5120Kb</b> pode ser inserido:

![Inserção do arquivo arq0005](/_assets/images/Hd_7.png){:height="461px" width="1053px" .center-image}

Portanto, a ideia é simular o <b>hd</b> como uma lista de blocos. Cada um destes blocos têm um tamanho em <b>Kb</b> e podem ser do tipo <b>LIVRE</b> ou <b>OCUPADO</b>. A seguir será mostrado como implementar as três operações no <b>hd</b>:

<font color = "blue" ><b>Inserção</b></font>
A ideia aqui é percorrer todo o <b>hd</b> procurando os blocos que têm tamanho maior ou igual ao tamanho do arquivo que se deseja inserir. Note que a função <b>insere</b> encontra a posição cujo o bloco comporta tal arquivo e seja o menor possível dentre os que comporta. Após definido o bloco, basta inserir o arquivo no mesmo, caso o bloco seja maior que o arquivo então um pedaço do bloco ainda estará disponível, assim basta inseri-lo no <b>hd</b> para que possa ser utilizado por outro arquivo.

{% gist wellvolks/0009e277010678fc1b3f11589d162b19 insere.cpp %}

<font color = "blue" ><b>Remoção</b></font>
O primeiro passo é verificar se o arquivo está no <b>hd</b> (linha 2). Caso não esteja não há nada a ser feito. Por outro lado, se estiver deve-se remove-lo. Lembre que o <b>map</b> arquivos mantem o "ponteiro" para o bloco que tem o arquivo em si armazenado, basta remove-lo da lista e dos arquivos. Note que antes da remoção em si, três situações podem ocorrer. Os mesmo são ilustrados a seguir:

![Inserção do arquivo arq0005](/_assets/images/situacoes.png){:height="461px" width="1053px" .center-image}

Na primeira situação o arquivo que será removido está do lado esquerdo de um bloco livre. Neste caso após a remoção deve-se realizar o <b>merge</b> dos blocos, gerando assim um único bloco com o valor do tamanho obtido pela soma dos valores dos tamanhos do bloco que continha o arquivo com o bloco livre. A segunda situação o arquivo que será removido está entre dois blocos livres. De forma parecida com a primeira situação, será realizado o <b>merge</b> do bloco que tinha o arquivo com os blocos da direita e da esquerda. Na terceira situação o procedimento é análogo a primeira situação, mas no caso o <b>merge</b> é realizado com o bloco da esquerda. Estas operações de <b>merge</b> são mostrada a seguir:

{% gist wellvolks/cc3ef4cdd2b2afe8a3a0fd92ae0d184b remove.cpp %}

<font color = "blue" ><b>Otimização</b></font>

Para realizar a operação de otimização basta percorrer todo o <b>hd</b> e ir contabilizando e removendo os blocos livre. No final basta criar um novo bloco com o tamanho contabilizado até então, desde que o mesmo não tenha valor zero. Segue o exemplo de implementação de tal operação: 

{% gist wellvolks/f4c500237b942628266ffa9f1f47f546 otimizacao.cpp %}

Após todas as operações terem sido realizadas, a útltima etapa consiste em percorrer o <b>hd</b> e computar a porcentagem de espaço livre em cada bloco de tamanho igual ao tamanho do bloco dividido por <b>8</b>, vamos armazenar tal valor em uma variável chamada <b>limite</b>. Note que os blocos do <b>hd</b> em si podem ter tamanhos maiores ou menores que o <b>limite</b>. Cada bloco é do tipo <b>LIVRE</b> ou <b>OCUPADO</b>, vamos outras duas variáveis: <b>livre</b> e <b>ocupado</b>. Elas irão manter o acumulado dos tamanhos dos blocos do tipo <b>LIVRE</b> e <b>OCUPADO</b>, respectivamente. Então ao percorrer os blocos do <b>hd</b>, partindo do inicio para o final, se <b>livre + ocupado ≥ limite</b> então um novo bloco de tamanho <b>limite</b> foi preenchido e devemos imprimir a porcentagem de espaço livre do mesmo. O bloco atual observado fez ultrapassar o <b>limite</b>, se o mesmo for do tipo <b>LIVRE</b> então a variável <b>ocupado</b> deve ser zerada, por outro lado, se for do tipo <b>OCUPADO</b> então a variável <b>livre</b> é que deve ser zerada. Mas por quê? Note que se o valor <b>limite</b> foi atingindo ou ultrapassado, então um novo bloco de tamanho <b>limite</b> deve ser "preenchido". Se o bloco atual é do tipo <b>LVIRE</b> então o acumulado em <b>ocupado</b> não irá afetar o novo bloco, da mesma que o acumulado em <b>livre</b> não afetará se o tipo for <b>OCUPADO</b>.

{% gist wellvolks/49bc54e7ef43e5e4437d38c50665f531 print.cpp %}


A implementação completa segue abaixo:

{% gist wellvolks/8c1aa815af97b7b232a159c8767dc4fa gerente.cpp %}

[uri-1369]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1369
