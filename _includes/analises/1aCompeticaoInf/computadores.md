## <div id="computadores">Computadores</div>

Autor: Leandro Vianna

Existe uma escolha de lojas que é sempre mais vantajosa para Longo, escolher a loja de menor de preço e comprar o máximo de computadores com o dinheiro do momento. Portanto, basta ordenar as lojas de forma crescente pelo preço dos computadores, e percorrer em sequência da loja de menor preço para a de maior preço, sempre tentando comprar o máximo de computadores for possível. 

Para calcular quantos computadores é possível comprar com o dinheiro atual, basta dividir o dinheiro atual pelo preço do computador da loja que está sem testada no momento. O piso deste valor é a quantidade computadores que pode ser comprada. 

Basta então a cada iteração retirar do dinheiro atual a quantidade de computadores comprados multiplicado pelo preço do computador nesta loja, ou seja, quanto foi gasto com computadores nesta loja. Deve ser mantida uma variável auxiliar inicializada com zero, e a cada iteração somar quantos computadores foram comprados, ao final esta variável conterá a resposta do problema, a quantidade máxima de computadores que podem ser comprados.


Um exemplo de implementação segue abaixo:

{% gist wellvolks/6cd4766bae7191a3f2913ad8bbeed25e computadores_leandro.cpp %}
