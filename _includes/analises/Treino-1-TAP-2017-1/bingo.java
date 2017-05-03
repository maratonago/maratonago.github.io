import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
 
    public static void main(String[] args) throws IOException {
		Scanner in = new Scanner( System.in ); 
		
		int N, B;
		int dentro_do_globo[] = new int[200];
		int bi[] = new int[200];
		
		N = in.nextInt();
		B = in.nextInt();
		
		while( (N+B) > 0 ){
			
			for(int i = 0; i < 200; i++){
				dentro_do_globo[i] = 0;
			}
			
			for(int i = 0; i < B; i++){
				bi[i] = in.nextInt();
				dentro_do_globo[ bi[i] ] = 1;
			}
			
			int gerado = 0;
			for(int c = 0; c <= N; c++){
				for(int b = 0; b < B; b++){
					int d = c + bi[b];
					if( dentro_do_globo[ d ] == 1 ){
						gerado++;
						break;
					}
				}
			}
			
			System.out.println((gerado == (N+1)) ? ("Y") : ("N"));
			
			N = in.nextInt();
			B = in.nextInt();
		}
	}
}