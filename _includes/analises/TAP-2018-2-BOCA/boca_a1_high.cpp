#include <bits/stdc++.h>

using namespace std;

struct tri{
	int id, menor_erro, pontos_perdidos;
	double altura;
	tri(int id = 0, double altura = 0, int menor_erro = 0, int pontos_perdidos = 0) : 
	id(id), altura(altura), menor_erro(menor_erro), pontos_perdidos(pontos_perdidos) { }

	bool operator < (const tri &a) const{
		if(altura < a.altura || altura > a.altura) return altura > a.altura;
		if(menor_erro != a.menor_erro) return menor_erro < a.menor_erro;
		if(pontos_perdidos != a.pontos_perdidos) return pontos_perdidos < a.pontos_perdidos;
		return id < a.id;
	}

	bool operator == (const tri &a) const{
		if(altura < a.altura || altura > a.altura) return false;
		if( menor_erro != a.menor_erro ) return false;
		if( pontos_perdidos != a.pontos_perdidos ) return false;
		return true;
	}
};

int main(){
	ios::sync_with_stdio(false);

	vector < tri > competidores;
	double altura;
	int n, k, id;
	string resultado;

	cin >> n;
	competidores.resize(n);

	while( cin >> altura && altura > 0.){
		cin >> k;

		for(int i = 0; i < k; i++){
			cin >> id;

			int menor_erro = 0;
			int pontuacao = 0;
			int perdidos = 0;
			
			for(int j = 0; j < 3; j++){
				cin >> resultado;

				if( resultado[0] == 'Y' ){
					pontuacao++;
				}
				else if( resultado[0] == 'N' ){
					menor_erro++;
					perdidos++;
				}
			}
			
			if(pontuacao != 0){
				competidores[id-1] = tri(id, altura, menor_erro, competidores[id-1].pontos_perdidos + perdidos);
			}
			else{
				competidores[id-1].pontos_perdidos += perdidos;
			}
		}
	}

	sort(competidores.begin(), competidores.end());
	vector < tri > vencedores;

	vencedores.push_back(competidores[0]);
	for(int i = 1; i < n && competidores[i] == competidores[0]; i++){
		vencedores.push_back(competidores[i]);
	}

	if(vencedores.size() > 1){
		cout << "There is a tie between the following contestants:";
		for(int i = 0; i < vencedores.size(); i++){
			cout << " " << vencedores[i].id;
		}
		cout << "\n";
	}
	else{
		cout << "The winner is contestant " << vencedores[0].id << ", with a height of " << fixed << setprecision(2) << vencedores[0].altura << "\n";
	}

	return 0;
}
