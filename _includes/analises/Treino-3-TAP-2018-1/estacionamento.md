 <div id="estacionamento">
 
 </div>
## N - Estacionamento

Resolva este problema:
[URI][uri-1246]{:target="_blank"}

Uma da formas de resolver este problema é através da simulação do estacionamento pela estrutura <a href="http://www.cplusplus.com/reference/map/map/"><b>map</b></a> <b>< int, int ></b>. A ideia é simular os espaços livres do estacionamento, desta forma a chave do <b>map</b> é composta pelo inicio do segmento de espaço livre e o valor o final de tal segmento. Podemos manter também um <b>vetor</b> de <a href="http://www.cplusplus.com/reference/utility/pair/"><b>pair</b></a> <b>< int, int ></b>, onde cada posição representa uma placa de um carro e o <b>pair</b> armazena o inicio e o fim do segmento de espaço do estacionamento onde o carro está estacionado. Desta forma não precisamos percorrer todo o estacionamento procurando o carro que será removido. Para efeito de entendimento vamos simular o segundo caso de teste do enunciado:

<font color = "blue">Tamanho do estacionamento igual a 30</font>
![Estacionamento](/_assets/images/est1.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Chega um carro com placa <b>1000</b> e tamanho <b>10</b></font>
![Chega carro 1000](/_assets/images/est2.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Chega um carro com placa <b>1001</b> e tamanho <b>10</b></font>
![Chega carro 1001](/_assets/images/est3.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Chega um carro com placa <b>1002</b> e tamanho <b>10</b></font>
![Chega carro 1002](/_assets/images/est4.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Sai um carro com placa <b>1000</b></font>
![Sai carro 1000](/_assets/images/est5.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Sai um carro com placa <b>1002</b></font>
![Sai carro 1002](/_assets/images/est6.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Chega um carro com placa <b>1003</b> e tamanho <b>20</b> mas não cabe no estacionamento</font>

<font color = "blue">Sai um carro com placa <b>1001</b></font>
![Sai carro 1001](/_assets/images/est7.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Chega um carro com placa <b>1004</b> e tamanho <b>20</b></font>
![Chega carro 1004](/_assets/images/est8.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Sai um carro com placa <b>1004</b></font>
![Sai carro 1004](/_assets/images/est9.png ){:height="461px" width="1053px" .center-image}

<font color = "blue">Chega um carro com placa <b>1005</b> e tamanho <b>30</b></font>
![Chega carro 1005](/_assets/images/est10.png ){:height="461px" width="1053px" .center-image}

Um exemplo de implementação segue abaixo:

{% gist wellvolks/ab669bb875a916b200ed58c1f1f26189 estacionamento.cpp %}


[uri-1246]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1246

