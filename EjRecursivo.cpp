#include <iostream>
using namespace std;


int factorial(int n);
bool esPrimo(int n);
void tablaMulti(int n);

int main() {
    int opcion;

    do {
        cout << "1) Factorial" << endl;
        cout << "2) Verifica si un numero es primo" << endl;
        cout << "3) Tabla de multiplicar" << endl;
        cout << "4) Cuentame un chiste" << endl;
        cout << "0) Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            int num;
            cout << "Ingrese el numero a calcular el factorial: ";
            cin >> num;
            cout << "El factorial de " << num << " es: " << factorial(num) << endl;
            break;
        }

        case 2: {
            int num;
            cout << "Ingrese un numero para verificar si es primo: ";
            cin >> num;
            if (esPrimo(num))
                cout << "El numero " << num << " es primo." << endl;
            else
                cout << "El numero " << num << " NO es primo." << endl;
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
            cout << "Que le dice un jardinero a otro? " << endl;
            cout << " - Nos vemos cuando podamos " << endl;
            break;
        }

        case 0:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Opcion invalida|" << endl;
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

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


void tablaMulti(int n) {
    cout << "Tabla del " << n << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
