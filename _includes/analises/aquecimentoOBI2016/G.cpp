#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int tunnel[128];

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) cin >> tunnel[i];

  int64 res = -1LL;

  for (int i = 1; i <= n; ++i) if (tunnel[i]) {
    int cnt = 0;
    int ax = i;
    while (tunnel[ax]) {
      cnt++;
      int nxt = tunnel[ax];
      tunnel[ax] = 0;
      ax = nxt;
    }
    if (res < 0LL) res = cnt;
    res = (res / __gcd(res, int64(cnt))) * int64(cnt);
  }
  cout << res << "\n";


  return 0;
}
