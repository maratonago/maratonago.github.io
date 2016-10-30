#!/usr/bin/env python3
# Paulo Cezar, Maratona 2016, Isosceles

N = int(input())
A = list(map(int, input().split()))

decr = [0] * N

prev = 0
for i in range(N):
  decr[i] = prev + 1 if A[i] > prev else A[i]
  prev = decr[i]

prev = 0
res = 0
for i in range(N, 0, -1):
  prev = prev + 1 if A[i-1] > prev else A[i-1]
  res = max(res, min(prev, decr[i-1]))

print(res)
