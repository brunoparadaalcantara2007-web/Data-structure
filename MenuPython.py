def main():
    opcion = -1

    while opcion != 0:
        print("\n===== MENU =====")
        print("1. Calcular factorial")
        print("2. Calcular Fibonacci")
        print("3. Suma de numeros hasta N")
        print("0. Salir")

        opcion = int(input("Elige una opcion: "))

        if opcion == 1:
            n = int(input("Introduce un numero: "))
            print("El factorial es:", factorial(n))

        elif opcion == 2:
            n = int(input("Introduce la posicion de Fibonacci: "))
            print("El numero Fibonacci es:", fibonacci(n))

        elif opcion == 3:
            n = int(input("Introduce un numero: "))
            print("La suma de numeros hasta", n, "es:", suma_n(n))

        elif opcion == 0:
            print("Hasta luego!")

        else:
            print("Opcion no valida")

if __name__ == "__main__":
    main()
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)


def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)


def suma_n(n):
    if n == 1:
        return 1
    return n + suma_n(n - 1)
