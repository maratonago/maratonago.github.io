---
layout: post
title:  "Regional da Maratona de Programação 2020"
tags: [maratona de programação, regional, 2020, problemset, analise]
categories: analise
author: rafaelcs
---

Aconteceu no dia 14 de Novembro de forma remota a etapa da regional da Maratona de Programação. O resultado completo pode ser conferido
[aqui][resultados-regional-2020]{:target="_blank"}. Em 2020 a sede Goiânia
teve 24 times de 6 instituições de todo o estado, ambos realizaram a prova de forma remota. As 10 melhores equipes
podem ser vistas na imagem abaixo.

![Top 10 - Regional Maratona de Programação 2020 - Sede Goiânia](/_assets/images/gogo-results-2020.png){: .center-image }

As equipes "Monkeys" do INF-UFG e BalloonField da PUC-Goiás se
classificaram para a fase nacional da maratona que acontecerá nos dias
11 a 13 de março de 2021 online. Boa sorte!

A prova esse ano veio de uma forma diferente já que seria realizada de forma remota, questões que não exirgiam muito código e mais raciocínio e com um nível interessante.
As dicas de soluções dos juizes podem ser encontradas [aqui][solucoes-juizes-2020]{:target="_blank"}. Além disso, algumas explicações mais elaboradas e exemplos de implementação podem ser encontradas abaixo.

| Problema                              | Dificuldade   | Técnica relacionada                                   |
|:--------------------------------------|:-------------:|------------------------------------------------------:|
|A - Álbum de Figurinhas                | médio         | programação dinâmica + matemática                     |
|B - Batalha Naval                      | difícil       | sqrt decomposition (mo algorithm), BIT, busca binária |
|C - Concatenando Times                 | médio         | dijkstra                                              |
|D - Dança da Divisibilidade            | fácil         | divisibilidade, lcm, gcd                              |
|E - Empresa de Festas                  | médio         | programação dinâmica, bitmasks                        |
|F - Fastminton                         | fácil/médio   | ad hoc, grafos, dfs                                   |
|G - Game Show!                         | fácil         | prefix sum, busca binária, programação dinâmica       |
|H - Hangar do SBC                      | balão++       | palindromos, strings                                  |
|I - Interatividade                     | fácil         | ad hoc                                                |
|J - Juntando Dados                     | difícil       | geometria, line sweep, convex hull                    |
|K - Ká entre Nós                       | difícil       | geometria, programação dinâmica                       |
|L - Lavaspar                           | fácil         | flood fill, bfs, dfs                                  |
|M - Metralhadora                       | fácil         | flood fill, bfs, dfs                                  |
|N - Números Multiplicados              | fácil         | flood fill, bfs, dfs                                  |
|O - Ônibus Venusiano                   | fácil         | flood fill, bfs, dfs                                  |
|=====

<br>
{% include analises/regional2020/A-album.md %} <br>
{% include analises/regional2020/B-batalha.md %} <br>
{% include analises/regional2020/C-concatenando.md %} <br>
{% include analises/regional2020/D-danca.md %} <br>
{% include analises/regional2020/E-empresa.md %} <br>
{% include analises/regional2020/F-fastminton.md %} <br>
{% include analises/regional2020/G-game.md %} <br>
{% include analises/regional2020/H-hangar.md %} <br>
{% include analises/regional2020/I-interatividade.md %} <br>
{% include analises/regional2020/J-juntando.md %} <br>
{% include analises/regional2020/K-ka.md %} <br>
{% include analises/regional2020/L-lavaspar.md %}<br>
{% include analises/regional2020/M-metralhadora.md %} <br>
{% include analises/regional2020/N-numeros.md %}<br>
{% include analises/regional2020/O-onibus.md %}

[resultados-regional-2020]: http://maratona.sbc.org.br/primfase20.html
[solucoes-juizes-2020]: http://maratona.sbc.org.br/primfase20/editorial_en20.pdf
