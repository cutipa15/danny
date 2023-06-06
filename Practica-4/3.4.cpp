#include <iostream>
#include <cmath>
using namespace std;
int main()
{
const float G = 6.673e-8;
float masa1, masa2, distancia, fuerza;
cout << " Introduzca la masa de los dos cuerpos en gramos:\n ";
cin >> masa1 >> masa2;
cout<<" Introduzca la distancia entre ellos en centimetros:\n ";
cin >> distancia;
if (( masa1 <= 0 ) || ( masa2 <= 0) || ( distancia <= 0 ))
cout << " no solucion\n";
else
{
fuerza = G * masa1 * masa2 / (distancia * distancia);
cout << " la solucion es: \n";
cout << " Fuerza en dinas = "<< fuerza << endl;
}

return 0;
}