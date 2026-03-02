#include <iostream>
using namespace std;

int factorial(int n);
bool esPrimo(int n);
int sumaPrimos(int n);
void tablaMulti(int n, int i = 1);

int main() {
    int opcion;

    do {
        cout << "\n1) Factorial" << endl;
        cout << "2) Suma de numeros primos hasta N" << endl;
        cout << "3) Tabla de multiplicar" << endl;
        cout << "4) Cuentame un chiste" << endl;
        cout << "0) Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

        case 1: {
            int num;
            cout << "Ingrese el numero para calcular el factorial: ";
            cin >> num;
            cout << "El factorial de " << num << " es: " << factorial(num) << endl;
            break;
        }

        case 2: {
            int num;
            cout << "Ingrese un numero N para sumar los primos hasta N: ";
            cin >> num;
            cout << "La suma de numeros primos hasta " << num
                << " es: " << sumaPrimos(num) << endl;
            break;
        }

        case 3: {
            int num;
            cout << "Ingrese un numero para ver su tabla de multiplicar: ";
            cin >> num;
            tablaMulti(num);
            break;
        }

        case 4: {
            cout << "Que le dice un jardinero a otro?\n";
            cout << " - Nos vemos cuando podamos \n";
            break;
        }

        case 0:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
        }

    } while (opcion != 0);

    return 0;
}


int factorial(int n) {
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

bool esPrimo(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sumaPrimos(int n) {
    if (n < 2)
        return 0;
    if (esPrimo(n))
        return n + sumaPrimos(n - 1);
    else
        return sumaPrimos(n - 1);
}



void tablaMulti(int n, int i) {
    if (i > 10)
        return;
    cout << n << " x " << i << " = " << n * i << endl;
    tablaMulti(n, i + 1);
}
