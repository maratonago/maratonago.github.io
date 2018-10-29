<div id="diamantes">

</div>

## G - Diamantes e Areia

Resolva este problema:
[URI][uri-1069]{:target="_blank"}

<p align="justify">
O problema pede para encontrar a quantidade de diamantes que compõem uma entrada. A entrada é composta por três tipos de caracteres:  <b><font color="red">&lt;</font></b>, <b><font color="red">&gt;</font></b> e <b><font color="red">.</font></b>. Um diamante é formado por dois caracteres: <b><font color="red">&lt; &gt;</font></b>. Observe que as partículas de areia, <b><font color="red">.</font></b>, não interfere na formação de diamantes. Portanto, para cada caractere <b><font color="red">&lt;</font></b> verificamos se o próximo caractere, ignorando os <b><font color="red">.</font></b>, é um <b><font color="red">&gt;</font></b>. Se for encontramos um diamante, o próximo passo consiste em remover esses dois caracteres. Vamos repetir esse processo até não encontramos mais nenhum diamante. A complexidade dessa abordagem é <b>O(N&sup2;)</b>, corre o risco de não ser aceita dependendo do servidor onde o problema é está sendo executado. 
</p>
<p align="justify">
Uma outra abordagem, com complexidade <b>O(N)</b>, consiste em computar a quantidade de diamantes em uma única passada na string de entrada. Vamos criar dois contadores, <b>aberto</b> e <b>diamantes</b> que armazenam a quantidade de caracteres do tipo <b><font color="red">&lt;</font></b> e a quantidade de diamantes encontrados até o momento, respectivamente. Então, para cada caractere, da esquerda para a direita, verificamos se é do tipo <b><font color="red">&lt;</font></b>, se for então <b>aberto = aberto + 1</b>, se for do tipo <b><font color="red">.</font></b> não fazemos nada, caso seja do tipo <b><font color="red">&gt;</font></b> verificamos se <b>aberto > 0 </b>, se for então um novo diamante pode ser formado, logo <b>diamantes = diamantes + 1</b>. Como utilizamos um <b><font color="red">&lt;</font></b> combinado com o <b><font color="red">&gt;</font></b> atual, devemos decrementar a quantidade de caracteres do tipo <b><font color="red">&lt;</font></b>, sendo assim <b>aberto = aberto - 1</b>.
</p>
<p align="justify">
Após processamos todos os caracteres a resposta está armazenada em <b>diamantes</b>. Note-se que esse problema também pode ser resolvido substituindo a variável <b>aberto</b> pela estrutura de dados <b>pilha</b>. Caso não esteja familiarizado fica como um exercício ;D.
</p>

Um exemplo de implementação segue abaixo:

{% gist wellvolks/6e3d3d8e57d5e61027ce26541f432f27 diamantes.cpp %}

[uri-1069]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1069
