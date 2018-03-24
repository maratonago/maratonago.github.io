 <div id="large">
 
 </div>
## C - Large Presents

Resolva este problema:
[URI][uri-2720]{:target="_blank"}


<p align="justify">
Bruninho é um rapaz experto <strike> (não quer ganhar cuecas e meias de presente)</strike> &#9786;, irá escolher, dentre os <b>N</b> presentes, os <b>K</b> que tenham os <b>maiores volumes</b>. O que pode causar um pouco de confusão neste problema é como o mesmo pede para listar, na saída, os <b>K</b> presentes selecionados. Tais presentes devem ser listados em ordem crescente levando em consideração os seus respectivos <b>ID's</b>, ou seja, basicamente basta ordenar os presentes pelo critério do maior <b>volume</b>, depois selecionar os <b>K</b> primeiros (maiores volumes) e ordená-los pelo critério do menor <b>ID</b>. Agora só imprimir estes <b>ID's</b>.
</p>

Dois exemplos de implementação (primeiro em C e o segundo em C++11) seguem abaixo:

{% gist wellvolks/e4c0417f4e196aefe68d13ea2c8e0ed1 largePresents.c %}

{% gist wellvolks/bf865ddd4d8821e9d94a7465e15f04bb largePresents.cpp %}

[uri-2720]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2720
