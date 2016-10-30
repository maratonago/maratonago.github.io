
## A - Fuso Horário

Resolva este problema:
[URI][uri-2057]{:target="_blank"}

O problema fornece como entrada t3 inteiros :  S (0 ≤ S ≤ 23), T (1 ≤ T ≤ 12) e F (-5 ≤ F ≤ 5), separados por um espaço, indicando respectivamente a hora da saída, o tempo de viagem e o fuso horário do destino com relação à origem. Portanto, o tempo total de viagem será definido por H = S + T + F, note que Paulo e Pedro podem chegar ao seu destino no outro dia, desta forma devemos fazer H = H % 24 para que o horário local seja mostrado corretamente. 

{% gist paulocezar/3fd8f228b74e6696ac5f04827f5e0510 A.cpp %}

[uri-2057]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2057
