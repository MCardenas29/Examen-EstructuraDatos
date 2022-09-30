import java.util.Scanner;

public class Potencia 
{
	static public void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int b = 0, a = 0;
		System.out.print("Introduce la base: ");
		a = in.nextInt();
		System.out.print("Introduce la exponente: ");
		b = in.nextInt();
		if (b >= 0)
			System.out.println(String.format("Resultado: %d", potencia(a, b)));
		else
			System.out.println("El numero debe de ser positivo\n");
	}

	static public long potencia(int a, int b) {
		if (b > 0)
			return a * potencia(a, b - 1);
		return 1;
	}
}
