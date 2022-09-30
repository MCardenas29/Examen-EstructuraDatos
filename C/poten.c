#include <stdio.h>

long int potencia(int a, int b) {
	if (b > 0)
		return a * potencia(a, b - 1);
	return 1;
}

int main() {
	int b = 0, a = 0;
	printf("Introduce la base: ");
	scanf("%d", &a);
	printf("Introduce el exponente: ");
	scanf("%d", &b);
	if (b >= 0)
		printf("Resultado: %ld\n", potencia(a, b));
	else
		printf("El numero debe de ser positivo\n");
}

