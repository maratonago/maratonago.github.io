<div id="gente">
</div>
## H - Gerente de Espaço

Resolva este problema:
[URI][uri-1369]{:target="_blank"}

Este problema não é difícil, mas sim trabalhoso. O problema consiste em simular três operações em um disco com tamanho <b>D</b> (<b>Kb</b>, <b>Mb</b> ou <b>Gb</b>). A primeira operação  <b>insere</b> um arquivo com identificador <b> NOME </b>. Aqui vale ressaltar o fato de como esse arquivo de ser inserido: <b><i>  Um arquivo é sempre armazenado em um bloco de células de armazenamento contíguas. O arquivo a ser inserido deve ser sempre colocado no início do <font color = "rede" > menor bloco livre </font> cujo tamanho é maior ou igual ao tamanho do arquivo. Se mais de um bloco livre é igualmente adequado, escolha o <font color = "rede" >mais próximo do começo do disco</font></i></b>. Portanto, o arquivo não deve ser inserido no primeiro bloco livre que comporte tal arquivo, mas sim, dentre todos o blocos que o comporte, no que tenha o menor tamanho e caso exista mais de um bloco com tal tamanho devemos escolher o que está mais perto do começo do disco.  Já a segunda operação <b>remove</b> um arquivo com identificador <b>NOME</b>. Por fim, a terceira operação <b>otimiza</b> o disco, realocando os arquivos para o inicio do disco mas mantendo a ordem dos mesmos. 

Observados as operações disponíveis, a primeira sugestão é trabalhar com o tamanho do disco em <b>Kb</b>, pois desta forma facilitará a manipulação dos blocos e da impressão da descrição do disco no final. As seguintes estruturas foram utilizadas:

{% gist leandrovianna/518090303067210ca2cfad8cbf88fd2a  estruturaBloco.cpp %}

Para representar o disco pode-se utilizar a estrutura de dados <a href = "http://www.cplusplus.com/reference/list/list/"> <b>list</b> </a> composta por outra estrutura <b>bloco</b>. Esta última é composta pelas variáveis: <b>tam</b> que representa o tamanho do bloco; <b>tipo</b> que armazena o tipo do bloco (LIVRE ou OCUPADO); e <b>nome</b> que mantem salvo o nome do arquivo que está armazenado no bloco em questão. A estrutura de dados <a href="http://www.cplusplus.com/reference/map/map/"><b>map</b></a> é utilizada com o intuito de acelerar a segunda operação (remoção), uma vez que a mesma mantem um "ponteiro" para o bloco cujo o arquivo está armazenado, a remoção se torna direta, sem a necessidade de percorrer todo o <b>hd</b> procurando o arquivo a ser removido.

Antes de explicar a solução acredito que seja melhor explicar pelo menos um caso de teste. Assim ficará mais simples de entender a solução empregada. Tal caso de teste é apresentado a seguir:

{% gist leandrovianna/63e277f25b536cd5cbbef1fdcc4fb0cc  teste.in %}

O primeiro passo é converter a unidade do disco de <b>8Mb</b> para <b>8192Kb</b>. No inicio o <b>hd</b> tem um único bloco livre com o tamanho da sua capacidade:

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_1.png){: .center-image }

A primeira operação é do tipo <b>insere</b>. Deseja-se inserir o arquivo <b>arq0001</b> de tamanho <b>4096Kb</b> (<b>4Mb</b>). Tal operação é possível uma vez que <b>hd</b> existe um bloco livre de tamanho <b>8192Kb</b>.

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_2.png){: .center-image }

O <b>hd</b> agora tem dois blocos, o primeiro e o segundo de tamanho <b>4096Kb</b>, mas o primeiro contendo o arquivo <b>arq0001</b> e o segundo livre. Observe que agora o mapa <b>arquivos</b> tem um "ponteiro" do arquivo <b>arq0001</b> para o bloco no qual foi alocado. De forma análoga, a próxima operação é realizada:

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_3.png){: .center-image }

A seguinte também:

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_4.png){: .center-image }

A próxima operação é de remoção, como já é sabido o bloco cujo o arquivo <b>arq0001</b> está alocado a operação pode ser realizada diretamente. Agora um novo bloco com tamanho <b>4096Kb</b> está livre (a próxima operação é ignorada já que o arquivo não está alocado no <b>hd</b>):

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_5.png){: .center-image }

A próxima operação válida é de inserção, mas não há espaço em disco para o arquivo <b>arq0001</b>. Seguindo as instruções do enunciado do problema, uma operação de otimização deve ser realizada. O <b>hd</b> então ficará desta forma:

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_6.png){: .center-image }

Note a mágica dos "ponteiros" ocorrendo =). Com um bloco de tamanho <b>6656Kb</b> livre o arquivo <b>arq0001</b> pode ser inserido:

![HD com um bloco livre de tamanho 4192Kb](/_assets/images/HD_7.png){: .center-image }

Um exemplo de implementação segue abaixo:

{% gist leandrovianna/518090303067210ca2cfad8cbf88fd2a facil-rujia-liu.cpp %}

[uri-1424]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1369
