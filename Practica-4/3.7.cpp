#include <iostream>

using namespace std;

int main() {
    
    int h, da, m;
    cout << "Ingrese La Longitud En: " << endl ;
    cout << "Hectometros: " ;
    cin >> h ;
    cout << "Decametros: " ;
    cin >> da ;
    cout << "Metros: " ;
    cin >> m ;

    int perimetro_en_decimetros = (h * 10000) + (da * 100) + (m * 10);

    cout << "El perimetro es de " << perimetro_en_decimetros << " decimetros." << endl;

    return 0;
}