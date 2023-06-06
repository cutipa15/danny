#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ROWS = 8;

int main() {
    int array[MAX_ROWS][MAX_ROWS] = {{1}};
    
    // Inicializamos el primer elemento de cada fila con 1
    for (int i = 1; i < MAX_ROWS; i++) {
        array[i][0] = 1;
    }
    
    // Calculamos los elementos del triángulo de Pascal
    for (int i = 1; i < MAX_ROWS; i++) {
        for (int j = 1; j <= i; j++) {
            array[i][j] = array[i-1][j-1] + array[i-1][j];
        }
    }
    
    // Imprimimos el triángulo de Pascal
    for (int i = 0; i < MAX_ROWS; i++) {
        // Imprimimos espacios para centrar el triángulo
        cout << string((MAX_ROWS-i)*3, ' ');

        for (int j = 0; j <= i; j++) {
            cout << setw(6) << array[i][j];
        }
        
        cout << endl;
    }
    
    return 0;
}