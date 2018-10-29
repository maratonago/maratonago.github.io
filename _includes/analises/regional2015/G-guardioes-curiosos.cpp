#include <bits/stdc++.h> 

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

const int64 MOD = int64(1e9 + 7);

int64 dp[128][128];
int64 fat[128], ifat[128];

int N, K;

int fpw(int64 a, int b) {
	int64 res = 1;
	while (b) {
		if (b & 1) res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}

int64 solve(int pos, int rem) {
	if (rem < 0) return 1;
	if (pos > N) return (rem ? 0LL : fat[N-2]);
	int64 &res = dp[pos][rem];
	if (res == -1LL) {
		res = 0LL;
		for (int put = 0; put <= min(rem, K-1); ++put) {
			res += (ifat[put] * solve(pos+1, rem-put)) % MOD;
			res %= MOD;
		}
	}
	return res;
}

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
    
    cin >> N >> K;

    fat[0] = ifat[0] = 1LL;
    for (int i = 1; i <= N; ++i) {
    	fat[i] = (fat[i-1] * i) % MOD;
    	ifat[i] = fpw(fat[i], MOD-2);
    	for (int j = 0; j < N; ++j) {
    		dp[i][j] = -1LL;
    	}
    }

    cout << solve(1, N-2) << "\n";

	return 0;
}
