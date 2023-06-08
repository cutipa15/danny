#include <iostream>
#include <cmath>

using namespace std;
int main(){
   float pies, yardas, pulgadas, centimetros, metros;
  cout << " Introduzca pies: \n ";
cin >> pies;
pulgadas = pies * 12;
yardas = pies / 3;
centimetros = pulgadas * 2.54;
metros = centimetros / 100;
cout << " pies " << pies << endl;
cout << " pulgadas " << pulgadas << endl;
cout << " yardas " << yardas << endl;
cout << " centimetros " << centimetros << endl;
cout << " metros " << metros << endl;


return 0;

} // REALIZAR LA TRANSFORMACION DE YARDAS A CENTIMETROS
