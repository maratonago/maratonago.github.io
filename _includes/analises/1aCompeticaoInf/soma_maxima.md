## C - Soma Máxima
<div id="soma"></div>

Autor: <font color="blue"> Rafael Castro </font>

Enunciado: [Soma][pc]

Resolva este problema: [Hackerrank][hackerrank-a]{:target="_blank"}

[pc]: https://github.com/maratonago/maratonago.github.io/raw/master/_includes/pdfs/primeira_comp_inf_ufg/C.pdf
[hackerrank-a]:	https://www.hackerrank.com/contests/ufg-contest-calouros/challenges/soma-maxima

O primeiro passo da solução será aplicar o máximo possível de operações sobre os números negativos (se eles existirem), começando do menor número negativo até o maior. Se após aplicado o primeiro passo ainda sobrarem algumas operações, então escolha o menor número <b>A<sub>i</sub></b> atual, e aplique as operações restantes sobre <b>A<sub>i</sub></b>, que pode ser feito aplicadas uma a uma ou apenas olhando a paridade desta quantidade restante. Assim, será garantido que as operações serão executadas de forma a gerar o maior valor possível.

O resultado será a soma dos números após executado os passos acima.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/dd47980d0cbffe5b2c0bc6bb87042fd8 soma_rafael_castro.cpp %}
