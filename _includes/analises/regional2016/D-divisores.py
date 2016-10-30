#!/usr/bin/env python3
# Paulo Cezar, Maratona 2016, Divisores

A, B, C, D = map(int, input().split())

def valid_guess(n):
  return (n % A == 0) and (n % B != 0) and (C % n == 0) and (D % n != 0);

res = C + 1

i = 1
while i * i <= C:
  if C % i == 0:
    if valid_guess(i):
      res = min(res, i)
    if valid_guess(C // i):
      res = min(res, C // i)
  i += 1

if res == C + 1:
  res = -1

print(res)
