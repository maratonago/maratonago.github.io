#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int dx[] = { 0,+1, 0,-1};
int dy[] = {+1, 0,-1, 0};

int main(int argc, char* argv[]) {

  ios::sync_with_stdio(false);
  
  int64 N, B;
  cin >> N >> B;
  
  int64 lo = 0LL, hi = N/2LL;
  while (lo <= hi) {
    int64 mid = (lo+hi)/2LL;
    int64 cells = 4LL*mid*(N-mid);
    if (cells <= B) {
      lo = mid+1LL;
    } else {
      hi = mid-1LL;
    }
  }
  int64 full = lo-1LL;
  
  B -= 4LL*full*(N-full);
  
  int x = full+1LL, y = full;
  int64 step = N - 2LL*full;
  int dir = 0;
  
  while (B > 0LL) {
    x += dx[dir]*min(B, step);
    y += dy[dir]*min(B, step);
    
    B -= step;
    if (!dir) step--;
    dir++;
  }
  
  cout << x << " " << y << "\n";
  
  return 0;
}
