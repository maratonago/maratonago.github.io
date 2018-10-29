
## C - Tri-du

Resolva este problema:
[Uva][uva-12952]{:target="_blank"},
[URI][uri-1933]{:target="_blank"}

O problema mais fácil da prova consistia de uma lógica bem simples.
Uma trinca ganha de qualquer par, então se as duas cartas forem iguais queremos
que a terceira também seja. No caso delas serem diferentes queremos formar o
maior par possível, então precisamos que a terceira carta seja igual a maior 
das duas que já temos. Acontece que a regra do maior par é suficiente para
garantir que formamos uma trinca (caso as duas cartas sejam iguais) então
basta imprimir o maior valor entre A e B.

{% gist paulocezar/4d4cc4322fca30f33289 C-tri-du.cpp %}

[uva-12952]:    https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4831
[uri-1933]:	    https://www.urionlinejudge.com.br/judge/pt/problems/view/1933