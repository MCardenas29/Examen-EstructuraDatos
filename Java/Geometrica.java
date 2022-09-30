import java.util.Scanner;

public class Geometrica 
{
	static public void main(String[] args) {
		int n = 0;
		Scanner in = new Scanner(System.in);
		System.out.print("Ingresa hasta donde terminar la secuencia: ");
		n = in.nextInt();
		for (int i = 1; i <= n; i++)
			System.out.println(String.format("%ld, ", geom(i)));
	}

	static long geom(int n) {
		if (n > 1)
			return geom(n - 1) * 3;
		return 5;
	}
}
