---
layout: post
title:  "Regional da Maratona de Programação 2016"
tags: [maratona de programação, regional, 2016, problemset, analise]
categories: analise
author: paulocezar
---

Aconteceu no dia 10 de Setembro em sedes espalhadas por todo o país a etapa
regional da Maratona de Programação. O resultado completo pode ser conferido
[aqui][resultados-regional-2016]{:target="_blank"}. Em 2016 a sede Goiânia
recebeu 21 times de 8 instituições de todo o estado. As 10 melhores equipes
podem ser vistas na imagem abaixo.

![Top 10 - Regional Maratona de Programação 2016 - Sede Goiânia](/_assets/images/gogo-results-2016.png){: .center-image }

A equipe "Where are the monkeys?" do INF-UFG se
classificou para a fase nacional da maratona que acontecerá nos dias
11 e 12 de Novembro em Belo Horizonte. Boa sorte!

A prova esse ano estava bem interessante e foi composta de 12 questões.
As dicas de soluções dos juizes podem ser encontradas [aqui][solucoes-juizes-2016]{:target="_blank"}. Além disso, algumas explicações mais elaboradas e exemplos de implementação podem ser encontradas abaixo.

| Problema                              | Dificuldade   | Técnica relacionada                                   |
|:--------------------------------------|:-------------:|------------------------------------------------------:|
|A - Andando no tempo                   | balão++       | ad hoc                                                |
|B - Batata quente                      | difícil       | sqrt decomposition (mo algorithm), BIT, busca binária |
|C - Containers                         | médio         | dijkstra                                              |
|D - Divisores                          | fácil         | divisibilidade, lcm, gcd                              |
|E - Estatística Hexa                   | médio         | programação dinâmica, bitmasks                        |
|F - Fundindo Árvores                   | fácil/médio   | ad hoc, grafos, dfs                                   |
|G - Go--                               | fácil         | prefix sum, busca binária, programação dinâmica       |
|H - huaauhahhuahau                     | balão++       | palindromos, strings                                  |
|I - Isósceles                          | fácil         | ad hoc                                                |
|J - Jogos Olímpicos                    | difícil       | geometria, line sweep, convex hull                    |
|K - Kit de encolhimento de polígonos   | difícil       | geometria, programação dinâmica                       |
|L - Ladrilhos                          | fácil         | flood fill, bfs, dfs                                  |
|=====

<br>
{% include analises/regional2016/A-andando-no-tempo.md %} <br>
{% include analises/regional2016/B-batata-quente.md %} <br>
{% include analises/regional2016/C-containers.md %} <br>
{% include analises/regional2016/D-divisores.md %} <br>
{% include analises/regional2016/E-estatistica-hexa.md %} <br>
{% include analises/regional2016/F-fundindo-arvores.md %} <br>
{% include analises/regional2016/G-go.md %} <br>
{% include analises/regional2016/H-huaauhahhuahau.md %} <br>
{% include analises/regional2016/I-isosceles.md %} <br>
{% include analises/regional2016/J-jogos-olimpicos.md %} <br>
{% include analises/regional2016/K-kit-de-encolhimento-de-poligonos.md %} <br>
{% include analises/regional2016/L-ladrilhos.md %}

[resultados-regional-2016]: http://maratona.ime.usp.br/vagas16.html
[solucoes-juizes-2016]: http://maratona.ime.usp.br/prim-fase16/SolucoesdaRegionaldaMaratona2016.pdf
