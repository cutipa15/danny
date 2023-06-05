#include <iostream>
#include <vector>

using namespace std;

void encontrarMayorMenor(vector<vector<int>> matriz) {
    int mayor = matriz[0][0]; 
    int menor = matriz[0][0]; 
    vector<int> posMayor = {0, 0};
    vector<int> posMenor = {0, 0};
    for(int i=0; i<matriz.size(); i++) {
        for(int j=0; j<matriz[i].size(); j++) {
            if(matriz[i][j] > mayor) { 
                mayor = matriz[i][j];
                posMayor = {i, j};
            }
            if(matriz[i][j] < menor) { 
                menor = matriz[i][j];
                posMenor = {i, j};
            }
        }
    }
    // Imprimimos el mayor elemento y su posición
    cout << "El mayor elemento es " << mayor << " y se encuentra en la posición (" << posMayor[0] << ", " << posMayor[1] << ")" << endl;
    // Imprimimos el menor elemento y su posición
    cout << "El menor elemento es " << menor << " y se encuentra en la posición (" << posMenor[0] << ", " << posMenor[1] << ")" << endl;
}

int main() {
    // Creamos una matriz de ejemplo
    vector<vector<int>> matriz = {{5, 6, 7, 5},
                                  {2, 2, 9, 15},
                                  {8, 4, 3, 2}};
    encontrarMayorMenor(matriz); // Llamamos a la función para encontrar el mayor y menor elemento de la matriz
    return 0;
}