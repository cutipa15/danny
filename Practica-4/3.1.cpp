#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, h; 

   
    cout << "Ingresa la longitud del lado a: ";
    cin >> a;
    cout << "Ingresa la longitud del lado b: ";
    cin >> b;
    
    h = sqrt(pow(a, 2) + pow(b, 2));

    cout << "La hipotenusa del triángulo es: " << h;

    return 0;
}