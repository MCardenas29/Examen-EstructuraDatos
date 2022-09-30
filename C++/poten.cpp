#include <iostream>

long int potencia(int a, int b) {
	if (b > 0)
		return a * potencia(a, b - 1);
	return 1;
}

int main() {
	int b = 0, a = 0;
	std::cout << "Introduce la base: ";
	std::cin >> a;
	std::cout << "Introduce el exponente: ";
	std::cin >> b;
	if (b >= 0)
		std::cout << "Resultado: " << potencia(a, b) << std::endl;
	else
		std::cout << "El numero debe de ser positivo" << std::endl;
}

