#include <iostream>
#include <vector>

const int NUM_FILAS = 3;
const int NUM_COLUMNAS = 5;

int main() {
    std::vector<std::vector<int>> array_bidimensional = {
        {4, 7, 1, 3, 5},
        {2, 0, 6, 9, 7},
        {3, 1, 2, 6, 4}
    };

    for (int i = 0; i < NUM_COLUMNAS; i++) {
        for (int j = 0; j < NUM_FILAS; j++) {
            std::cout << array_bidimensional[j][i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}