#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

char cached[256][256][256];
pair<int,int64> dp[256][256][256];
int nxt[3][256][21];

int K;

vector<int> L(3);
vector<vector<int>> s(3);

pair<int,int64> solve(int p1, int p2, int p3) {
  auto &r = dp[p1][p2][p3];
  if (cached[p1][p2][p3]) return r;
  cached[p1][p2][p3] = 1;

  vector<int> p = {p1, p2, p3};
  bool done = false;
  for (int i = 0; i < 3; ++i) {
    done = done || (p[i] > L[i]);
  }
  if (done) {
    return r = make_pair(0, 1LL);
  }
  r = make_pair(2e9, 0);

  for (int cur = 1; cur <= K; ++cur) {
    vector<int> nx(3);
    for (int i = 0; i < 3; ++i) nx[i] = nxt[i][p[i]][cur] + 1;
    auto ax = solve(nx[0], nx[1], nx[2]);
    if ((ax.first + 1) < r.first) {
      r.first = (ax.first + 1);
      r.second = 0LL;
    }
    if ((ax.first + 1) == r.first) {

      r.second += ax.second;
    }
  }

  return r;
}

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  cin >> K;
  for (auto &v : L) cin >> v;

  for (int i = 0; i < 3; ++i) {
    s[i].resize(L[i]);
    for (auto &v : s[i]) cin >> v;
  }

  for (int i = 0; i < 3; ++i) {
    for (int k = 1; k <= K; ++k) {
      nxt[i][L[i]][k] = L[i];
    }

    for (int j = L[i]-1; j >= 0; --j) {
      for (int k = 1; k <= K; ++k) {
        nxt[i][j][k] = nxt[i][j+1][k];
        if (s[i][j] == k) nxt[i][j][k] = j;
      }
    }
  }

  auto res = solve(0, 0, 0);
  cout << res.first << " " << res.second << "\n";

  return 0;
}
