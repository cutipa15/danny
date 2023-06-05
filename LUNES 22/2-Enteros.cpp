#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int total_numeros = 10;
    vector<int> numeros(total_numeros);

    cout << "Ingrese 10 números enteros:" << endl;

    // Lectura de los números enteros
    for (int i = 0; i < total_numeros; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Cálculo de la suma de los números
    int suma = 0;
    for (int i = 0; i < total_numeros; i++) {
        suma += numeros[i];
    }

    // Cálculo de la media aritmética
    float media = suma / static_cast<float>(total_numeros);

    // Mostrar resultados
    cout << "La suma de los números es: " << suma << endl;
    cout << "La media aritmética de los números es: " << media << endl;

    return 0;
}