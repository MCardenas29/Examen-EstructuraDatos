#include <iostream>

long int geometrica(int n) {
	if (n > 1)
		return geometrica(n - 1) * 3;
	return 5;
}

int main() {
	int n = 0;
	std::cout << "Ingresa hasta donde terminar la secuencia: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++)
		std::cout << geometrica(i) << ", ";
}
