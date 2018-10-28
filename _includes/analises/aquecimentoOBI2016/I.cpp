#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int c[1<<14];

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  priority_queue<pair<int,int>> q;

  for (int i = 0; i < N; ++i) {
    q.push(make_pair(0, -i));
    cin >> c[i];
  }

  int ans = 0;
  while (M--) {
    int cashier = -q.top().second;
    int instant = -q.top().first; q.pop();
    int items; cin >> items;
    instant += items * c[cashier];
    ans = max(ans, instant);
    q.push(make_pair(-instant, -cashier));
  }
  cout << ans << "\n";


  return 0;
}
