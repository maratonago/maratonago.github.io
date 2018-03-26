 <div id="sub">
 
 </div>
## K - Sub-prime

Resolva este problema:
[URI][uri-1105]{:target="_blank"}

<p align="justify">
 <strike>Devo, não nego, pago quando puder!</strike> O exercício pede para verificar se os bancos irão conseguir pagar suas dívidas utilizando apenas as suas reservas monetárias e seus créditos. Para resolver este problema basta computar o saldo de cada banco, se um banco <b>X</b> deve um valor <b>z</b> para um outro banco <b>Y</b>, então <b>saldo[ X ] -= z</b> e , por conseguinte, <b>saldo[ Y ] += z</b> uma vez que o banco <b>Y</b> irá receber tal quantia. Se no final das transações nenhum banco estiver com saldo negativo foi possível evitar a crise, caso contrário não foi possível.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/a69aeb0ed5305b43040b44b84f829de9 sub-prime.cpp %}


[uri-1105]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1105

