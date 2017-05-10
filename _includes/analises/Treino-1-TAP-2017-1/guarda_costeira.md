<div id="guarda">

</div>

## M - Guarda Costeira

Resolva este problema:
[URI][uri-1247]{:target="_blank"}

<p align="justify">
A figura abaixo representa a situação apresentada na descrição do problema:
</p>

![Desenho representando a situação mostrada no enunciado](/_assets/images/guarda.png){: .center-image }

<p>
Vamos supor o que a guarda costeira no último instante antes do ladrão conseguir chegar nas águas internacionais. Note-se que esse caso é expresso na Figura acima. Se encontrarmos o valor de <b>H</b> podemos calcular o tempo que a guarda costeira leva para interceptar o ladrão. Esse tempo vai ser <b>TG = <sup>H</sup>&frasl;<sub>VG</sub></b>. O valor de <b>H</b> pode ser encontrado aplicando o teorema de Pitágoras: <b>H = &radic;( D&sup2; + 12&sup2; )</b>. O tempo gasto pelo o ladrão vai ser <b>TL = <sup>12</sup>&frasl;<sub>VL</sub></b>. Se a guarda costeira chega nas águas internacionais antes ou no mesmo instante que o ladrão, ou seja, <b>TG &le; TL</b>, então a guarda costeira consegue interceptar o ladrão em algum ponto do seu trajeto em direção às águas internacionais.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/468854028542097e55407afa7a403b2b guarda_costeira.cpp %}


[uri-1247]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1247
