#include <bits/stdc++.h> 

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int dist[1<<15];
vector<pair<int,int>> gr[1<<14];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
    
    int C, V, C1, C2, G;
    cin >> C >> V;

    for (int i = 1; i <= C; ++i) dist[i<<1] = dist[(i<<1)|1] = 2e9;

    while (V--) {
    	cin >> C1 >> C2 >> G;
    	gr[C1].push_back(make_pair(C2,G));
    	gr[C2].push_back(make_pair(C1,G));
    }

    priority_queue<pair<int,int>> q;
    dist[2] = 0;
    q.push(make_pair(0, 2));
    while (!q.empty()) {
    	int d = -q.top().first;
    	int u = q.top().second; q.pop();
    	int p = u & 1;
    	u >>= 1;
    	if ((u == C) && !p) break;
    	p = 1-p;
    	for (auto &w : gr[u]) {
    		int v = (w.first<<1)|p;
    		int nd = d+w.second;
    		if (nd < dist[v]) {
    			dist[v] = nd;
    			q.push(make_pair(-nd, v));
    		}
    	}
    }

    if (dist[(C<<1)] == 2e9) dist[C<<1] = -1;
    cout << dist[C<<1] << "\n";

	return 0;
}
