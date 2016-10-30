#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;



int main(int argc, char* argv[]) {

  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<int> val = {2, 3, 4, 5};
  vector<int> ans(4, 0);

  for (int i = 0; i < N; ++i) {
    int ax; cin >> ax;
    for (int j = 0; j < 4; ++j) ans[j] += (ax % val[j]) ? 0 : 1;
  }

  for (int i = 0; i < 4; ++i) {
    cout << ans[i] << " Multiplo(s) de " << val[i] << "\n";
  }

  return 0;
}
