---
layout: post
title:  "1ª Competição de Programação - 2018/2"
tags: [maratona de programação, inf, ufg, problemset, analise]
categories: analise
author: wellvolks
---


Aconteceu em 03 de Outubro de 2018 a 1ª Competição de Programação - 2018/2 do INF-UFG. O placar final da competição pode ser visto na imagem abaixo:

![1ª Competição de Programação do INF-UFG](/_assets/images/placar_final_1_competicao_ufg.PNG){: .center-image }

[Placar completo aqui](/_assets/scoreboard_boca_1a_comp_inf/Report Page.html).

<style>
* {
    box-sizing: border-box;
}

body {
    margin: 0;
    font-family: Arial, Helvetica, sans-serif;
}

.header {
    text-align: center;
    padding: 32px;
}

.row {
    display: -ms-flexbox; /* IE 10 */
    display: flex;
    -ms-flex-wrap: wrap; /* IE 10 */
    flex-wrap: wrap;
    padding: 0 4px;
}

/* Create two equal columns that sits next to each other */
.column {
    -ms-flex: 50%; /* IE 10 */
    flex: 50%;
    padding: 0 4px;
}

.column img {
    margin-top: 8px;
    vertical-align: middle;
}

/* Style the buttons */
.btn {
    border: none;
    outline: none;
    padding: 10px 16px;
    background-color: #f1f1f1;
    cursor: pointer;
    font-size: 18px;
}

.btn:hover {
    background-color: #ddd;
}

.btn.active {
    background-color: #666;
    color: white;
}
</style>

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
</script\>

Parabéns à todos que participaram. O vencedor dessa competição, <b>Renato Alves Barbosa Junior</b>, ganhou um Power Bank 10000mA. Os dez primeiros participantes foram premiados com uma camiseta e brindes. Abaixo segue a lista dos ganhadores:

<p align="justify">
  <b>1ª</b>  <span style="color:red">Renato Alves Barbosa Junior</span>
</p>
<p align="justify">
  <b>2ª</b>   <span style="color:blue">Felipe Aguiar Costa</span>
</p>
<p align="justify">
  <b>3ª</b>	<span style="color:blue">Daniel Campos da Silva</span>
</p>
<p align="justify">
  <b>4ª</b>	<span style="color:blue">Gabriel Crispim Valentino de Siqueira</span>
</p>
<p align="justify">
  <b>5ª</b>	<span style="color:blue">Julio Cesar Freitas Bueno de Moraes</span>
</p>
<p align="justify">
  <b>6ª</b>	<span style="color:blue">Alexander Henrique Watanabe de Souza</span>
</p>
<p align="justify">
  <b>7ª</b>	<span style="color:blue">Lucas Nunes Rios</span>
</p>
<p align="justify">
  <b>8ª</b>	<span style="color:blue">Pedro Henrique Sanches Pelegrino Zambrano</span>
</p>
<p align="justify">
  <b>9ª</b>	<span style="color:blue">Gustavo Machado Leal</span>
</p>
<p align="justify">
  <b>10ª</b>	<span style="color:blue">Vinicius Fleury Barbosa</span>
</p>

Para quem deseja tentar novamente, ou submeter usando outras ideias, os problemas estão disponíveis
para submissão no [HackerRank](https://www.hackerrank.com/ufg-contest-calouros).

A prova foi composta por 8 problemas. Os níveis dos problemas e as respectivas técnicas que podem ser usadas para resolvê-los são apresentados na tabela abaixo:


| Problema                                            | Dificuldade   | Técnica relacionada      |
|:----------------------------------------------------|:-------------:|-------------------------:|
|A - <a href="#bolo">Bolo</a>                        | Fácil         | Ad hoc                   |
|B - <a href="#computadores">Computadores</a>                | Médio         | Guloso                   |
|C - <a href="#soma">Soma máxima</a>                   | Médio         | Guloso                   |
|D - <a href="#dados">Dados</a>                      | Fácil         | Matemática               |
|E - <a href="#log">Log bactérias</a>            | Médio         | Matemática               |
|F - <a href="#sinuca">Sinuca</a>                    | Fácil         | Implementação            |
|G - <a href="#subcadeia">Subcadeia interessante</a>  | Médio         | String + Ad hoc          |
|H - <a href="#melancias">Melancias</a>                  | Fácil         | Ad hoc                   |
|=====


As explicações dos problemas seguem abaixo: <br> 
{% include analises/1aCompeticaoInf/bolo.md %} <br>
{% include analises/1aCompeticaoInf/computadores.md %} <br>
{% include analises/1aCompeticaoInf/soma_maxima.md %} <br>
{% include analises/1aCompeticaoInf/dados.md%} <br>
{% include analises/1aCompeticaoInf/log_bacterias.md%} <br>
{% include analises/1aCompeticaoInf/sinuca.md %} <br>
{% include analises/1aCompeticaoInf/cadeia_caracteres.md %} <br>
{% include analises/1aCompeticaoInf/melancias.md %} <br>
