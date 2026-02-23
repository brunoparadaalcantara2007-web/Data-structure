#include <iostream>
using namespace std;

int main() {
    int op;
    do {
        cout << "MENU\n0.SALIR\n1.SUMA\n2.SIGNO\n3.FACTORIAL\nOPCION: ";
        cin >> op;

        if (op == 1) {
            int a, b;
            cin >> a >> b;
            cout << a + b << endl;
        } 
        else if (op == 2) {
            int n;
            cin >> n;
            if (n > 0) cout << "POSITIVO\n";
            else if (n == 0) cout << "NULO\n";
            else cout << "NEGATIVO\n";
        } 
        else if (op == 3) {
            int n;
            cin >> n;
            long long f = 1;
            for (int i = 1; i <= n; i++) f *= i;
            cout << f << endl;
        } 
        else if (op != 0) {
            cout << "ERROR\n";
        }

    } while (op != 0);

    return 0;
}
