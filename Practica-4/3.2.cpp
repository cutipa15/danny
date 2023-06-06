#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingresa un numero entero: ";
    cin >> n;

    int doble = 2 * n;
    int triple = 3 * n;

    cout << "El doble de " << n << " es: " << doble << endl;
    cout << "El triple de " << n << " es: " << triple << endl;

    return 0;
}