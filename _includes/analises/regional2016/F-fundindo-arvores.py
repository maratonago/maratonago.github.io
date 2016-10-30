#!/usr/bin/env python3
# Paulo Cezar, Maratona 2016, Fundindo arvores

class Tree:
  def __init__(self, n):
    self.size = n
    self.child = [0] * (n + 1)
    self.center = [0] * (n + 1)

  def nodes(self):
    return self.size

  def add(self, u, s, c):
    self.child[u] = s
    self.center[u] = c

  def deepest(self):
    stack = [1]
    mxrt, mxch, cur = 0, 0, 0
    while stack:
      u = stack.pop()
      cur += 1

      if cur > mxch:
        mxch = cur

      if self.child[u] != 0:
        stack.append(self.child[u])

      if self.center[u] != 0:
        stack.append(self.center[u])
      else:
        if mxrt == 0:
          mxrt = cur
        cur=0

    return [mxrt, mxch]


def read_tree(inv = False):
  N = int(input())
  t = Tree(N);
  for i in range(N):
    u, v, c = map(int, input().split())
    if inv:
      v, c = c, v
    t.add(u, v, c);
  return t;


l = read_tree()
r = read_tree(True)

al = l.deepest()
ar = r.deepest()

ans = l.nodes() + r.nodes() - max(min(al[0], ar[1]), min(al[1], ar[0]))
print(ans)
