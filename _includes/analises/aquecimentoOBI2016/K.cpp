#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int cnt_zeroes[256][256];

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  int cur;

  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= M; ++j) {
      cin >> cur;
      cnt_zeroes[i][j] = cnt_zeroes[i][j-1] + cnt_zeroes[i-1][j] - cnt_zeroes[i-1][j-1];
      if (cur == 0) cnt_zeroes[i][j]++;
    }
  }

  int Q, S;
  cin >> Q;
  while (Q--) {
    cin >> S;

    bool possible = false;

    for (int i = 1; !possible && (i <= N); ++i) {
      int ii = i + S - 1;
      if (ii > N) break;
      for (int j = 1; !possible && (j <= M); ++j) {
        int jj = j + S - 1;
        if (jj > M) break;
        int zeroes = cnt_zeroes[ii][jj] - cnt_zeroes[ii][j-1] - cnt_zeroes[i-1][jj] + cnt_zeroes[i-1][j-1];
        if (zeroes == 0) {
          possible = true;
        }
      }
    }

    if (possible) cout << "yes\n";
    else cout << "no\n";
  }

  return 0;
}
