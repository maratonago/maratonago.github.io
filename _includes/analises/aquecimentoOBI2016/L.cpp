#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int64 t1, t2, N;
  cin >> t1 >> t2 >> N;

  int64 len = (t2 - t1) * 60LL;

  int64 total = len * len;
  int64 no_matches = (len-N)*(len-N);
  int64 matches = total - no_matches;

  int64 g = __gcd(matches, total);
  matches /= g;
  total /= g;

  cout << matches << "/" << total << "\n";

  return 0;
}
