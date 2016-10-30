// Paulo Cezar, Maratona 2016, Batata Quente

import java.util.Arrays;
import java.util.Scanner;
import java.lang.Math;

class Query {
  public int l, r, id;
}

class Bit {
  int [] tree;
  int sz;
  public Bit(int len) {
    sz = len;
    tree = new int[len+1];
  }

  public int get(int idx) {
    int res = 0;
    while (idx > 0) {
      res += tree[idx];
      idx -= idx & -idx;
    }
    return res;
  }

  public void incr(int idx, int amnt) {
    while (idx <= sz) {
      tree[idx] += amnt;
      idx += idx & -idx;
    }
  }
}

public class B {

  static int [] p;
  static int [] lw;
  static boolean [] seen;
  static int [] ans;
  static Bit bit;
  static int n;

  static int lowest_in_cycle(int u, int first) {
    int res = u;
    while (u != first) {
      u = p[u];
      res = Math.min(res, u);
    }
    return res;
  }

  static int find_lowest(int u) {
    if (lw[u] != 0) return lw[u];

    if (seen[u]) {
      lw[u] = lowest_in_cycle(p[u], u);
    } else {
      seen[u] = true;
      lw[u] = Math.min(u, find_lowest(p[u]));
    }

    return lw[u];
  }

  static int most_fair(int rng) {
    int lo = 1, hi = n;
    int tgt = (rng+1) / 2;
    while (lo <= hi) {
      int mid = (lo+hi) / 2;
      int freq = bit.get(mid);

      if (freq >= tgt) {
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    }

    int freq = bit.get(lo);
    if (lo == 1) return freq;

    lo = 1; hi = n;
    tgt = rng / 2;
    while (lo <= hi) {
      int mid = (lo+hi) / 2;
      int freq2 = bit.get(mid);

      if (freq2 <= tgt) {
        lo = mid+1;
      } else {
        hi = mid-1;
      }
    }
    int freq2 = bit.get(hi);
    if ((rng - 2*freq2) <= (2*freq - rng)) return freq2;
    return freq;
  }

  static int earliest(int freq) {
    int lo = 1, hi = n;
    while (lo <= hi) {
      int mid = (lo+hi) / 2;
      if (bit.get(mid) >= freq) {
        hi = mid-1;
      } else {
        lo = mid+1;
      }
    }
    return lo;
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    n = in.nextInt();
    int q = in.nextInt();

    p = new int[n+1];
    lw = new int[n+1];
    seen = new boolean[n+1];

    ans = new int[q];
    Query [] qs = new Query[q];

    bit = new Bit(n);

    for (int i = 1; i <= n; ++i) {
      p[i] = in.nextInt();
    }

    for (int i = 0; i < q; ++i) {
      qs[i] = new Query();
      qs[i].l = in.nextInt();
      qs[i].r = in.nextInt();
      qs[i].id = i;
    }

    for (int i = 1; i <= n; ++i) {
      find_lowest(i);
    }

    int SQRT = (int)Math.ceil(Math.sqrt(n));
    Arrays.sort(qs, (Query a, Query b) -> {
      int aa = a.l / SQRT;
      int bb = b.l / SQRT;
      if (aa != bb) return aa - bb;
      return a.r - b.r;
    });

    bit.incr(lw[1], 1);
    int l = 1, r = 1;
    for (int i = 0; i < q; ++i) {
      while (qs[i].l < l) bit.incr(lw[--l], 1);
      while (qs[i].l > l) bit.incr(lw[l++], -1);
      while (qs[i].r > r) bit.incr(lw[++r], 1);
      while (qs[i].r < r) bit.incr(lw[r--], -1);
      ans[qs[i].id] = earliest(most_fair(r - l + 1));
    }

    for (int i = 0; i < q; ++i) {
      System.out.println(ans[i]);
    }
  }
}
