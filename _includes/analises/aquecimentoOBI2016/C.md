
## C - Ímpar, Par ou Roubo

Resolva este problema:
[URI][uri-2059]{:target="_blank"}

O problema, inicialmente, pode parecer um pouco complicado mas não tem segredo, basta verificar as condições informadas na descrição do problema:

Se o jogador 1 roubar:
	O jogador pode acusar roubo ou não:
		Se acusar: o jogador 2 ganha
		Se não acusar: o jogador 1 ganha
	Se o jogador 1 não roubar:
		O jogador pode acusar roubo ou não:
			Se acusar: o jogador 1 ganha
			Se não acusar:	
				Se der ímpar a soma:
					Se o jogador 1 escolheu impar ele ganha
					Senão o jogador 2 ganha
				Se der par a soma:
					Se o jogador 1 escolheu par ele ganha
					Senão o jogador 2 ganha


{% gist paulocezar/3fd8f228b74e6696ac5f04827f5e0510 C.cpp %}

[uri-2059]:		https://www.urionlinejudge.com.br/judge/pt/problems/view/2059
