#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

string var[128][128];
int line_sum[128], col_sum[128];
int L, C;

void update(string &found, int val) {
  for (int i = 0; i < L; ++i) {
    for (int j = 0; j < C; ++j) {
      if (var[i][j] == found) {
        line_sum[i] -= val;
        col_sum[j] -= val;
      }
    }
  }
}

int main(int argc, char* argv[]) {

  ios::sync_with_stdio(false);
  
  cin >> L >> C;
  
  set<string> unknown;
  for (int i = 0; i < L; ++i) {
    for (int j = 0; j < C; ++j) {
      cin >> var[i][j];
      unknown.insert(var[i][j]);
    }
    cin >> line_sum[i];
  }
  
  for (int j = 0; j < C; ++j) {
    cin >> col_sum[j];
  }
  
  map<string, int> known;
  while (known.size() != unknown.size()) {
  
    for (int i = 0; i < L; ++i) {
      set<string> unk;
      int times = 0;
      for (int j = 0; j < C; ++j) {
        if (!known.count(var[i][j])) {
          times++;
          unk.insert(var[i][j]);
        }
      }
      if (unk.size() == 1) {
        string found = *unk.begin();
        known[found] = line_sum[i] / times;
        update(found, known[found]);
        break;
      }
    }
    
    for (int j = 0; j < C; ++j) {
      set<string> unk;
      int times = 0;
      for (int i = 0; i < L; ++i) {
        if (!known.count(var[i][j])) {
          times++;
          unk.insert(var[i][j]);
        }
      }
      if (unk.size() == 1) {
        string found = *unk.begin();
        known[found] = col_sum[j] / times;
        update(found, known[found]);
        break;
      }
    }
    
  }
  
  for (auto &res : known) {
    cout << res.first << " " << res.second << "\n";
  }
  
  return 0;
}
