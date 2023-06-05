#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i*i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int cantidad_Primos = 100;
    vector<int> primos;

    int numero = 2;
    while (primos.size() < cantidad_Primos) {
        if (esPrimo(numero)) {
            primos.push_back(numero);
        }
        numero++;
    }

    // Mostrar tabla de números primos
    cout << "Tabla de los 100 primeros números primos:" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < primos.size(); i++) {
        cout  << primos[i] << endl;
    }

    return 0;
}