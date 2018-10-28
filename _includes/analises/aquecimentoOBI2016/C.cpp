#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int p, j1, j2, r, a, win;
  cin >> p >> j1 >> j2 >> r >> a;

  if (r && a) {
    win = 2;
  } else if (r || a) {
    win = 1;
  } else if ((1-p)  == ((j1+j2)&1)) {
    win = 1;
  } else  {
    win = 2;
  }

  cout << "Jogador " << win << " ganha!\n";

  return 0;
}
