#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;



int main(int argc, char* argv[]) {

  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  string act;
  while (m--) {
    cin >> act;
    if (act[0] == 'f') {
      n++;
    } else {
      n--;
    }
  }
  cout << n <<  '\n';

  return 0;
}
