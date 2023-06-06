#include <iostream>
using namespace std;

int main() {
  int edad;
  bool vacunado;

  cout << "INGRESE SU EDAD: ";
  cin >> edad;

  cout << "¿ESTA USTED VACUNADO? (SI / NO): ";
  cin >> vacunado;

  // Evaluamos si puede ingresar al cine
  if (edad >= 16 && vacunado) {
    cout << "USTED PUEDE INGRESAR" << endl;
  }
  else {
    cout << "USTED NO PUEDE INGRESAR" << endl;
  }

  return 0;
}