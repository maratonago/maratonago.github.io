#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  string s;
  while (n--) {
    cin >> s;
    if ((s.size() == 3) && (((tolower(s[0]) == 'o') && (tolower(s[1]) == 'b')) || ((tolower(s[0]) == 'u') && (tolower(s[1]) == 'r')))) {
      if (islower(s[2])) s[2] = 'i';
      else s[2] = 'I';
    }
    cout << s;
    if (n) cout << " ";
  }
  cout << "\n";

  return 0;
}
