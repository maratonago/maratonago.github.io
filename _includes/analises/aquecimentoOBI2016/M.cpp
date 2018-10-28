#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

const int SQMP = 182;
const int MAXP = 32768;

bitset< MAXP > bs;
vector<int64> primes;

void sieve(){
  for (int i = 1; i < MAXP; ++i) bs[i] = i & 1;
  bs[1] = false;
  bs[2] = true;

  for (int i = 3; i <= SQMP; i+=2) if (bs[i]) {
    for (int j = i*i; j <= MAXP; j+=i) {
      bs[j] = false;
    }
  }

  for (int i = 1; i <= MAXP; ++i) if (bs[i]) {
    primes.push_back(i);
  }
}

int64 doit(int64 num) {
  int64 res = 1;

  for (auto &p : primes) {
    if (num % p) continue;
    int cnt = 0;
    while ((num % p) == 0LL) {
      cnt++; num /= p;
    }
    cnt = (cnt+1)>>1;
    while (cnt--) res *= p;
  }

  if (num != 1LL) res *= num;

  return res;
}

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false);

  sieve();

  int64 A, B;
  cin >> A >> B;
  cout << doit(__gcd(A,B)) << endl;

  return 0;
}
