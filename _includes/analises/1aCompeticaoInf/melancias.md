## H - Melâncias
<div id="melancias"></div>

Autor: <font color = "blue">Humberto Longo</font>

Enunciado: [Melâncias][ph]

Resolva este problema: [Hackerrank][hackerrank-a]{:target="_blank"}

[ph]: https://github.com/maratonago/maratonago.github.io/raw/master/_includes/pdfs/primeira_comp_inf_ufg/H.pdf
[hackerrank-a]:	https://www.hackerrank.com/contests/ufg-contest-calouros/challenges/melancias

Suponha que uma camada da pilha seja um triangulo com <b>i</b> melancias por lado. Isso significa que esse triangulo tem <b>i + (i-1) + ... + 1</b> melancias. 
Assim, basta começar da camada superior e, a cada iteração, aumentar uma camada e verificar se a quantidade total de triangulos excedeu o limite.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/ef9f1d83fe24f4311e83e44cb10cbb1b melancias_longo.cpp %}
