#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int opcion;
    double num1, num2;

    cout << "MENU DE OPCIONES" << endl;
    cout << "1. SUMA" << endl;
    cout << "2. RESTA" << endl;
    cout << "3. DIVISION" << endl;
    cout << "4. MULTIPLICACION" << endl;
    cout << "5. POTENCIA" << endl;
    cout << "INGRESE EL NUMERO DE OPCION: ";
    cin >> opcion;

    switch (opcion) {
        case 1: 
            cout << "INGRESES DOS NUMEROS PARA SUMAR: ";
            cin >> num1 >> num2;
            cout << "LA SUMA ES: " << num1 + num2 << endl;
            break;
        case 2: 
            cout << "INGRESE DOS NUMEROS PARA RESTAR: ";
            cin >> num1 >> num2;
            cout << "LA RESTA ES: " << num1 - num2 << endl;
            break;
        case 3: 
            cout << "INGRESE DOS NUMEROS PARA DIVIDIR: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                cout << "LA DIVISION ES : " << num1 / num2 << endl;
            } 
            break;
        case 4: 
            cout << "INGRESE DOS NUMEROS PARA MULTIPLICAR: ";
            cin >> num1 >> num2;
            cout << "LA MULTIPLICACION ES: " << num1 * num2 << endl;
            break;
        case 5: 
            cout << "INGRESE LA BASE Y EL EXPONENTE: ";
            cin >> num1 >> num2;
            cout << "LA POTENCIA ES: " << pow(num1, num2) << endl;
            break;
        default:
            cout << "OPCION INVALIDA." << endl;
            break;
    }

    return 0;
}
