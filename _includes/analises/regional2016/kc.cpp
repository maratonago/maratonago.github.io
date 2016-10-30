#include <bits/stdc++.h>

using namespace std;

typedef long long int64;

#define INF 1125899906842624LL

struct tri{
	int64 x, y;
	tri(int64 x = 0LL, int64 y = 0LL) : x(x), y(y) { }
};

vector < tri > vet;

int64 dp[100005][2][2][2][2];
int used[100005][2][2][2][2], vis = 1;
int n;
tri pts[2];

int64 area(tri a, tri b, tri c){ 
	int64 r = a.x *(b.y - c.y) + b.x*(c.y - a.y) + c.x * (a.y - b.y);
	if( r < 0LL ) return -r;
	return r;
}


int orientation(tri p, tri q, tri r){
    int64 val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
 
    if (val == 0LL) return 0; 
    return (val > 0LL) ? 2: 1; 
}

int isConvexo(int a, int b, int c, int f1, int f2, int f3){
	tri x, y, z, p;

	if( a < 0 || b < 0 || c < 0 ) return 0;

	x.x = (max(vet[a].x,pts[f1].x) + min(vet[a].x,pts[f1].x));
	x.y = (max(vet[a].y,pts[f1].y) + min(vet[a].y,pts[f1].y));

	y.x = (max(vet[b].x,pts[f2].x) + min(vet[b].x,pts[f2].x));
	y.y = (max(vet[b].y,pts[f2].y) + min(vet[b].y,pts[f2].y));

	z.x = (max(vet[c].x,pts[f3].x) + min(vet[c].x,pts[f3].x));
	z.y = (max(vet[c].y,pts[f3].y) + min(vet[c].y,pts[f3].y));

	return orientation(x, y, z);

}

int64 getArea(int f, int a, int b, int f1, int f2){
	tri x, y, z;

	if( a < 0 || b < 0 ) return 0;
	z.x = (max(vet[0].x,pts[f].x) + min(vet[0].x,pts[f].x));
	z.y = (max(vet[0].y,pts[f].y) + min(vet[0].y,pts[f].y));

	x.x = (max(vet[a].x,pts[f1].x) + min(vet[a].x,pts[f1].x));
	x.y = (max(vet[a].y,pts[f1].y) + min(vet[a].y,pts[f1].y));

	y.x = (max(vet[b].x,pts[f2].x) + min(vet[b].x,pts[f2].x));
	y.y = (max(vet[b].y,pts[f2].y) + min(vet[b].y,pts[f2].y));


	return area(z, x, y);
}


int64 solve(int at, int p1, int p2, int n1, int n2, int flag){
	if( at >= n ){
		return isConvexo(1, 0, at-1, p2, p1, n1) == flag ? (0) : (INF);
	}

	int64 &ans = dp[at][p1][p2][n1][n2];
	int &us = used[at][p1][p2][n1][n2];

	if(us == vis) return ans;
	us = vis;
	ans = INF;

	if( at <= 1 ){
		for(int i = 0; i < 2; i++){
			if( at == 0 ) p1 = i;
			else if( at == 1 ) p2 = i;
			ans = min(ans, solve(at+1, p1, p2, i, n1, flag) + getArea(p1, at-1, at, n1, i));
		}
	}
	else{
		for(int i = 0; i < 2; i++){
			int s = isConvexo(at, at-1, at-2, i, n1, n2);
			int ss = isConvexo(1, 0, at, p2, p1, i);
			if( s == 0 && at == 2 ){
				ans = min(ans, solve(at+1, p1, p2, i, n1, flag) + getArea(p1, at-1, at, n1, i));
			}
			else if( s == flag && ss == flag ) ans = min(ans, solve(at+1, p1, p2, i, n1, flag) + getArea(p1, at-1, at, n1, i));
		}
	}

	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin >> n;
	
	long long x, y;
	vet.resize(n);
	for(int i = 0; i < n; i++){
		cin >> vet[i].x >> vet[i].y;
	}

	cin >> pts[0].x >> pts[0].y;
	cin >> pts[1].x >> pts[1].y;

	int64 s1 = solve(0, 0, 0, 0, 0, 1);
	vis++;
	int64 s2 = solve(0, 0, 0, 0, 0, 2);
	vis++;
	
	cout << fixed << setprecision(3) << double(min(s1, s2))/8. << '\n';
	
	return 0;
}
