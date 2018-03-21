// Welton Cardoso do Carmo, Treino 1 - TAP 2017/1, Bingo -- O(N*B), C

#include <stdio.h>
#include <stdlib.h>

#define MAXN 200

int dentro_do_globo[MAXN], bi[MAXN];

int main(){

	int N, B, gerado, i, b, c, d;

	while( scanf("%d %d", &N, &B) && (N+B) ){

		for(i = 0; i < 200; i++){
			dentro_do_globo[i] = 0;
		}

		for(i = 0; i < B; i++){
			scanf("%d", &bi[i]);
			dentro_do_globo[ bi[i] ] = 1;
		}

		gerado = 0;
		for(c = 0; c <= N; c++){
			for(b = 0; b < B; b++){
				d = (c + bi[b]);
				if( dentro_do_globo[ d ] == 1 ){
					gerado++;
					break;
				}
			}
		}

		puts((gerado == (N+1)) ? ("Y") : ("N"));
	}
	return 0;
}
