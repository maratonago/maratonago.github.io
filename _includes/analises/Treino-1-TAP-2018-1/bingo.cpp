// Welton Cardoso do Carmo, Treino 1 - TAP 2017/1, Bingo -- O(N*B), C++

#include <bits/stdc++.h>
#define MAXN 200

using namespace std;

int dentro_do_globo[MAXN], bi[MAXN];

int main(){
	ios::sync_with_stdio(false);

	int N, B;

	while( cin >> N >> B && (N+B) ){

		for(int i = 0; i < 200; i++){
			dentro_do_globo[i] = 0;
		}

		for(int i = 0; i < B; i++){
			cin >> bi[i];
			dentro_do_globo[ bi[i] ] = 1;
		}

		int gerado = 0;
		for(int c = 0; c <= N; c++){
			for(int b = 0; b < B; b++){
				int d = (c + bi[b]);
				if( dentro_do_globo[ d ] == 1 ){
					gerado++;
					break;
				}
			}
		}

		cout << ((gerado == (N+1)) ? ("Y\n") : ("N\n"));
	}
	return 0;
}
