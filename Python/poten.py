
def potencia(a, b):
	if b > 0:
		return a * potencia(a, b - 1)
	return 1

def main():
	a = int(input("Introduce la base: "));
	b = int(input("Introduce el exponente: "));
	if (b >= 0):
		print("Resultado: " + str(potencia(a, b)));
	else:
		print("El numero debe de ser positivo");

if __name__ == '__main__':
	main();
