// Paulo Cezar, Maratona 2016, Go--

import java.util.Scanner;

public class G {

  public static byte[][] grid;
  public static int[][][] acm;
  public static byte[] players = {0, 1};

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int N = in.nextInt();
    int P = in.nextInt();

    grid = new byte[N][N];
    acm = new int[2][N][N];

    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        grid[i][j] = 2;
      }
    }

    for (byte player : players) {
      for (int i = 0; i < P; ++i) {
        int L = in.nextInt();
        int C = in.nextInt();
        grid[L - 1][C - 1] = player;
      }

      for (int i = 0; i < N; ++i) {
        int run = 0;
        for (int j = 0; j < N; ++j) {
          if (grid[i][j] == player) run++;
          acm[player][i][j] = run;
          if (i > 0) acm[player][i][j] += acm[player][i - 1][j];
        }
      }
    }

    int[] p = {0, 0};

    for (int len = 0; len < N; ++len) {
      for (int i = 0; i + len < N; ++i) {
        for (int j = 0; j + len < N; ++j) {

          boolean[] has = {false, false};

          for (byte player : players) {
            int cnt = acm[player][i + len][j + len];
            if (i > 0 && j > 0) cnt += acm[player][i - 1][j - 1];
            if (i > 0) cnt -= acm[player][i - 1][j + len];
            if (j > 0) cnt -= acm[player][i + len][j - 1];

            has[player] = cnt > 0;
          }

          if (has[0] && !has[1]) p[0]++;
          else if (has[1] && !has[0]) p[1]++;
        }
      }
    }

    System.out.println(p[0] + " " + p[1]);
  }
}
