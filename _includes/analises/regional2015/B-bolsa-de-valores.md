
## B - Bolsa de Valores

Resolva este problema:
[Uva][uva-12951]{:target="_blank"},
[URI][uri-1932]{:target="_blank"}


Ao terminar de ler o segundo problema da prova, o competidor que já conhece
a técnica de [programação dinâmica][wkp-dp1]{:target="_blank"} provavelmente
fica com uma impressão de que a solução pro problema envolve o uso dessa
técnica. E de fato ele está correto. Deixando a historinha de lado, temos um
período de $$N \leq 2*10^5$$ dias para os quais sabemos os valores de venda das
ações de uma empresa e queremos saber qual seria o valor máximo que poderiamos 
lucrar se tivessemos investido nesse período dado que para cada compra de ações
deve-se pagar uma taxa de $$C$$ reais e que nunca podemos ter mais de uma ação
da empresa.

Sendo assim, a decisão que precisamos tomar a cada dia é bem simples, podemos
vender a ação que possuímos (caso tenhamos alguma ação) ou podemos comprar uma
ação caso não tenhamos nenhuma. As informações que precisamos saber para tomar
a decisão num certo dia são apenas o dia em que estamos e se possuímos ou não
uma ação da empresa, e isso categoriza nosso estado. As decisões que podemos
tomar são: não fazer nada, vender a ação que possuímos ou comprar uma nova ação
e essas serão as nossas transições. Tanto implementações recursivas com 
memorização (top-down) quanto iterativas (bottom-up) dessa abordagem são bem
simples e eficiente.

Um exemplo de implementação top-down segue abaixo:

{% gist paulocezar/4d4cc4322fca30f33289 B-bolsa-de-valores.cpp %}


[uva-12951]:	https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4830
[uri-1932]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1932
[wkp-dp1]:		https://en.wikipedia.org/wiki/Dynamic_programming