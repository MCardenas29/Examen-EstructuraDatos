#include <stdio.h>

long int geometrica(int n) {
	if (n > 1)
		return geometrica(n - 1) * 3;
	return 5;
}

int main() {
	int n = 0;
	printf("Ingresa hasta donde terminar la secuencia: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		printf("%ld, ", geometrica(i));
}
