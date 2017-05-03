---
layout: post
title:  "TAP-2017/1 Treino 1"
tags: [maratona de programação, tópicos avançados de programação, problemset, analise]
categories: analise
author: wellvolks
---

Aconteceu em 26 de Abril de 2017 o primeiro treino da disciplina TAP-Tópicos Avançados de Programação. O placar final do treino pode ser visto na imagem abaixo.

![Placar final do Treino-1 - TAP/2017-1](/_assets/images/Placar-Treino-1-Tap2017-1.png){: .center-image }


A prova foi composta por 13 problemas. Os níveis dos problemas e as respectivas técnicas que podem ser usadas para resolve-los é apresentado na tabela abaixo.

| Problema				                | Dificuldade	| Técnica relacionada	                                |
|:--------------------------------------|:-------------:|------------------------------------------------------:|
|A - Bingo! 		            | 3   	| ad hoc		                                        |
|B - Horas e Minutos	                    | 2	    | ad hoc |
|C - LED				            | 1		    | string		                                        |
|D - Árvore de Natal		                    | 2	        | ad hoc, substr                              |
|E - Telefone Sem Fio			        | 2 		| contadores                        |
|F - Trilhos			        | 3   | pilha                                   |
|G - Diamantes e Areia	                            | 2         | contadores, pilha       |
|H - Pontos de Feno	                    | 3		| mapas, STL maps				                    |
|I - Mapa do Meistre			                | 2		    | travessia em grafos					                            |
|J - Primo Rápido	                | 2 		| matemática                    |
|K - Guarda Costeira   | 2 	    | matemática, Ad Hoc	                    |
|=====


O enunciado do problema começa explicando a versão clássica do jogo de Bingo e logo após apresenta uma nova versão chamada **A**lbert-**C**harles-**M**ary.  Nesta versão o caller sorteia uma primeira bola, coloca-a de volta no globo, sorteia uma segunda bola, coloca-a de volta no globo e então anuncia a diferença absoluta entre os números das duas bolas. O problema consiste em descobrir se é possível gerar todos os números de **0** até **N** através destas diferenças levando em consideração as **B** bolas que restaram dentro do globo.  Seja **bi** o valor de alguma bola dentro do globo e **c** algum valor entre **0** e **N** inclusive, **c** é gerado se existir alguma bola, dentro do globo, com o valor **bi+c**. Como o valor de **N** ≤ **90**, podemos olhar para todos os valores possíveis de **c** e **bi**, ou seja, de **0** até **N** e verificar se **|bi+c|** está dentro do globo.

{% include analises/Treino-1-TAP-2017-1/Bingo.md %}
