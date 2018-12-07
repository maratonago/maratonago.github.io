---
layout: post
title:  "1ª Competição de Programação - 2018/2"
tags: [maratona de programação, inf, ufg, problemset, analise]
categories: analise
author: wellvolks
---


Aconteceu em 06 de Outubro de 2018 a 2ª Competição de Programação - 2018/2 do INF-UFG. A participação na competição foi restringida aos alunos que ingresseram no curso nos anos de 2017 e 2018. O placar final da competição, geral ou por semestre/ano, pode ser observado abaixo:


<!-- Header -->
<div class="header" id="myHeader">
  <h1>Placar Final</h1>
  <button class="btn" onclick="one(0)">Geral</button>
  <button class="btn" onclick="one(1)">2017</button>
  <button class="btn" onclick="one(2)">2018</button>
  <button class="btn" onclick="one(3)">2017-1</button>
  <button class="btn" onclick="one(4)">2017-2</button>
  <button class="btn" onclick="one(5)">2018-1</button>
  <button class="btn" onclick="one(6)">2018-2</button>
</div>

<!-- Photo Grid -->
<div class="row"> 
  <div class="column">
    <img  id = "id_img" src="https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/all.png?raw=true" style="width:100%">
  </div>
</div>

<script>
// Get the elements with class="column"

// Declare a loop variable
var i;
var links = ['https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/all.png?raw=true', 'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m17.png?raw=true', 'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m18.png?raw=true', 'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m171.png?raw=true',
'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m172.png?raw=true',
'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m181.png?raw=true',
'https://github.com/maratonago/maratonago.github.io/blob/master/_assets/images/m182.png?raw=true'];

// Full-width images
function one(id) {
    document.getElementById("id_img").src = links[id];
}


// Add active class to the current button (highlight it)
var header = document.getElementById("myHeader");
var btns = header.getElementsByClassName("btn");
for (var i = 0; i < btns.length; i++) {
  btns[i].addEventListener("click", function() {
    var current = document.getElementsByClassName("active");
    current[0].className = current[0].className.replace(" active", "");
    this.className += " active";
  });
}
</script>

Para quem deseja resolver os problemas, um replay da competição está disponível no [HackerRank](https://www.hackerrank.com/2-competicao-de-programacao-infufg-20182).

Parabéns à todos que participaram. Como o placar da competição foi dividido de acordo com o ano (2017 e 2018), tivemos dois vencedores:
  
<p align="justify">
  <b>2017</b>  <span style="color:red">Joao Batista de Oliveira Netto</span>
</p>
<p align="justify">
  <b>2018</b>   <span style="color:blue">Felipe Aguiar Costa</span>
</p>

Os vencedores ganharam um MI BAND 2 cada. Os demais participantes ganharam, além dos brindes, uma camisa com o macote (Monkey) do INF na Maratona de Programação. 


A prova foi composta por 9 problemas. Os níveis dos problemas e as respectivas técnicas que podem ser usadas para resolvê-los são apresentados na tabela abaixo:


| Problema                                            | Dificuldade   | Técnica relacionada      |
|:----------------------------------------------------|:-------------:|-------------------------:|
|A - <a href="#desafio">Desafio</a>                        | Difícil         | Ad hoc + XOR                   |
|B - <a href="#forro">Forró no cafundó</a>                | Fácil         | Matemática                   |
|C - <a href="#obras">Obras</a>                   | Médio         | Guloso                   |
|D - <a href="#tap">Problemas do TAP</a>                      | Médio         | Ad hoc + Matriz              |
|E - <a href="#brincando">Brincando com múltiplos</a>            | Difícil         | Princípio da inclusão-exclusão    |
|F - <a href="#escadas">Escadas</a>                    | Médio         | Programação Dinâmica            |
|G - <a href="#campeonato">Campeonato de arco e flecha</a>  | Difícil         | Busca binária          |
|H - <a href="#terrenos">Terrenos</a>                  | Médio         | Matemática                   |
|=====


As explicações dos problemas seguem abaixo: <br> 
 <!--{% include analises/1aCompeticaoInf/desafio.md %} <br> -->
 <!--{% include analises/1aCompeticaoInf/forro.md %} <br> -->
 <!--{% include analises/1aCompeticaoInf/obras.md %} <br> -->
 <!--{% include analises/1aCompeticaoInf/tap.md%} <br> -->
 <!--{% include analises/1aCompeticaoInf/brincando.md%} <br> -->
 <!--{% include analises/1aCompeticaoInf/escadas.md %} <br> -->
 <!--{% include analises/1aCompeticaoInf/campeonato.md %} <br> -->
 <!--{% include analises/1aCompeticaoInf/terrenos.md %} <br> -->
