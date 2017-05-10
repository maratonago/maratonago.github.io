## L - Primo Rápido

Resolva este problema:
[URI][uri-1221]{:target="_blank"}

<p align="justify">
Mariazinha solicita um programa que aceite diversos valores e diga, para cada um destes valores, se são primos ou não. Um valor é primo se tem apenas dois divisores: um e o próprio valor.  Como os valores de <b>X < 2147483648 </b>,  <b> &radic;X < 46340</b> e <b>N* &radic;X < 9268000 </b>, podemos olhar para todos os possíveis divisores de <b>X</b>, ou seja, precisamos olhar todos os valores até a  <b> &radic;X</b>. Se algum desses valores dividir <b>X</b> então o mesmo não é primo, caso contrário ele é primo.
</p>


Um exemplo de implementação segue abaixo:

{% gist wellvolks/9b81d78f04cbe19dd535b2b0108b0c7d primo_rapido.cpp %}


[uri-1221]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/1221
