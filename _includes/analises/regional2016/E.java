// Paulo Cezar, Maratona 2016, Estatística Hexa

import java.util.Scanner;
import java.util.Arrays;
import java.util.function.Function ;
import java.lang.Math;

public class E {

  static final int BASE = 16;
  static final long MOD = 1000000007L;

  static long [] mn = new long[1<<BASE];
  static long [] mx = new long[1<<BASE];
  static long [] sum = new long[1<<BASE];
  static long [] f = new long[BASE + 1];

  public static long getValue(int mask, String hex) {
    long val = 0L;
    for (int i = 0, sz = hex.length(); i < sz; ++i) {
      int cur = (hex.charAt(i) >= 'a') ? (10 + hex.charAt(i) - 'a') : (hex.charAt(i) - '0');
      if ((mask & (1<<cur)) != 0) {
        val = BASE * val + cur;
      }
    }
    return val;
  }

  public static void main(String[] args) {

    f[0] = 1L;
    for (int i = 1; i <= BASE; ++i) f[i] = ((long)i * f[i-1]) % MOD;

    Scanner in = new Scanner(System.in);
    int n = in.nextInt(BASE); in.nextLine();

    String [] s = new String[n];

    for (int i = 0; i < n; ++i)  {
      s[i] = in.nextLine();
    }

    int all = (1 << BASE) - 1;
    long total = 0L;
    mn[0] = 0L;
    mx[0] = 0L;
    for (int mask = 1; mask <= all; ++mask) {
      sum[mask] = 0L;
      for (int i = 0; i < n; ++i) {
        sum[mask] += getValue(mask, s[i]);
      }

      mn[mask] = Long.MAX_VALUE;
      mx[mask] = Long.MIN_VALUE;

      int on = 0;
      int tr = mask;
      while (tr > 0) {
        int cur = tr & -tr;
        int prv = mask ^ cur;
        mn[mask] = Math.min(mn[mask], sum[prv] + mn[prv]);
        mx[mask] = Math.max(mx[mask], sum[prv] + mx[prv]);
        on++;
        tr -= cur;
      }
      int off = BASE - on;

      if (mask != all) {
        total += ((sum[mask]%MOD) * ((f[on] * f[off])%MOD)) % MOD;
        total %= MOD;
      }
    }

    System.out.printf("%x %x %x\n", mn[all], mx[all], total);
  }
}
