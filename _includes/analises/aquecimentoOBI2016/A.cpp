#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int s, t, f;
  cin >> s >> t >> f;

  cout << (s + t + f + 24) % 24 << "\n";

  return 0;
}
