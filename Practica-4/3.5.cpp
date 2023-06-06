#include <iostream>

using namespace std;

int main() {

    float m;
    cout << "Ingrese La Masa En Gramos: ";
    cin >> m;

    const float c = 2.997925e10; 

    float E = m * c * c; 
    
    cout << "La Cantidad De Energia Producida Es De " << E << " Ergios." << endl;

    return 0;
}