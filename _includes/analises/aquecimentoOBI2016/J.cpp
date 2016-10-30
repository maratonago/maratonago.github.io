#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;


int main(int argc, char* argv[]) {

  ios::sync_with_stdio(false);

  int64 pw[18];

  pw[0] = 1LL;
  for (int i = 1; i < 18; ++i) pw[i] = 10LL * pw[i-1];

  int K;
  cin >> K;

  int i = 0, j = K-1;
  int64 all = 9LL * pw[K-1];
  int64 leq = 9LL * pw[((K+1)/2) - 1];

  while (i < j) {

    for (int dig = 1; dig < 10; ++dig) {
      int64 cur = int64(dig) * pw[j-i-1];
      if (i) {
        cur *= 9LL * pw[i-1];
      }
      leq += cur;
    }
    i++, j--;
  }

  cout << all - leq << "\n";

  return 0;
}
