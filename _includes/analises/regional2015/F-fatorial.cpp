#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int main(int argc, char* argv[]) {

  ios::sync_with_stdio(false);
  
  int N;
  cin >> N;

  vector<int> f;
  int fat = 1;
  for (int i = 1; i*fat <= N; ++i) {
  	fat *= i;
  	f.push_back(fat);
  }

  int res = 0;
  while (N) {
  	N -= *(upper_bound(f.begin(), f.end(), N)-1);
  	res++;
  }
  
  cout << res << "\n";

  return 0;
}
