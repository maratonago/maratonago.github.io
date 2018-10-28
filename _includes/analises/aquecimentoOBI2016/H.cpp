#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int k, m, n;
  cin >> k >> m >> n;

  string fav, orig;
  map<char, int> cnt;
  vector<string> oper(n);

  cin >> fav;
  cin >> orig;

  for (int i = 0; i < m; ++i) {
    cnt[orig[i]]++;
  }

  int best = 0;
  for (char c : fav) best += cnt[c];

  string a, b;
  int bi = -1;

  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    oper[i] = a + b;

    swap(cnt[a[0]], cnt[b[0]]);

    int cur = 0;
    for (char c : fav) cur += cnt[c];
    if (cur > best) {
      best = cur;
      bi = i;
    }
  }

  map<char, char> stt, i_stt;
  for (char x = 'a'; x <= 'z'; ++x) stt[x] = x, i_stt[x] = x;

  for (int i = 0; i <= bi; ++i) {
    stt[i_stt[oper[i][0]]] = oper[i][1];
    stt[i_stt[oper[i][1]]] = oper[i][0];

    swap(i_stt[oper[i][0]], i_stt[oper[i][1]]);
  }

  for (int i = 0; i < m; ++i) {
    orig[i] = stt[orig[i]];
  }

  cout << best << "\n" << orig << "\n";

  return 0;
}
