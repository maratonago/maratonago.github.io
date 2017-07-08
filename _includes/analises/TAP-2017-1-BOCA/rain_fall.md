<div id="rain">

</div>

## Rain Fall

<p align="justify">

</p>
<p align="justify">
A chuva é recolhida num tubo transparente vertical com marcas milimétricas, e uma vez que a chuva parou de cair, pode-se verificar a altura da água no tubo. O problema informa que esse tubo tem um vazamento na altura <b>L</b>. Se o nível da água estiver acima de <b>L</b> a água drena do tubo a uma taxa de <b>K</b> mm/h. O objetivo é descobrir qual a quantidade de chuva capitada pelo o tudo durante um certo período.
</p>

<p align="justify">
O primeiro passo é observar que existem três casos possíveis em relação aos valores fornecidos na entrada:  <b>I) H &lt; L </b> nesse caso a resposta deve ser <b>H H</b> visto que se <b>H &lt; L </b> não ocorreu vazamento durante o período que choveu, logo o volume mínimo e máximo é <b>H</b>;  <b>II) H &#61; L</b> nesse caso a resposta é dada por <b> L C </b> uma vez que podemos supor que a vazão do vazamento foi igual a taxa de chuva, logo a quantidade mínima de chuva possível é <b>L</b>. O volume máximo, representado por <b>C</b>, devemos  calcular;  <b>III) H &gt; L </b> nesse caso a resposta correta seria <b> C C </b>.
</p>

<p align="justify">
O segundo passo é computador o valor de <b>C</b>. Note-se que se descobrirmos a taxa de chuva, uma vez que o problema não informa esse valor mas afirma que é constante, podemos calcular o valor de <b>C</b>. Seja <b>R</b> a taxa de chuva ao longo do período fornecido, então:
</p>

<p align="middle"> <b> C = R*T&#8321; </b> </p>

<p align="justify">
A Figura abaixo ilustra um exemplo do problema fornecido no enunciado.
</p>

![Desenho representando a situação mostrada no enunciado](/_assets/images/chuva.png){: .center-image }

<p align="justify">
O volume máximo de chuva, <b>C</b>, seguindo a Figura acima, é dado por:
</p>

<p align="middle"> <b> C = X + L </b> </p>

<p align="justify">
O valor de <b>X</b>, por sua vez, pode ser encontrado como segue:
</p>

<p align="middle"> <b> X = (R-K)*(T&#8321; - <sup>L</sup>&frasl;<sub>R</sub>) </b> </p>

<p align="justify">
Portanto,
</p>

<p align="middle"> <b> C = (R-K)*(T&#8321; - <sup>L</sup>&frasl;<sub>R</sub>) + L </b> </p>

