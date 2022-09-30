def geometrica(n):
    if n > 1:
        return geometrica(n - 1) * 3
    return 5

def main():
    n = int(input("Ingresa hasta donde terminar la secuencia: "));
    for i in range(1, n):
	    print(geometrica(i), end = ", ")

if __name__ == '__main__':
    main();
