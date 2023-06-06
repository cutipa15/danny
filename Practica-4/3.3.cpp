#include <iostream>
#include <cmath>

using namespace std;
int main(){

float a, b, c, d, e, f, denominador, x, y;
cout << " Introduzca el valor de a de b y de c: ";
cin >> a >> b >> c;

    cout << " Introduzca el valor de d de e y de f :" ;
cin >> d >> e >> f;
denominador = a * e - b * d;
if (denominador == 0)
cout << " no solucion\n";
else
{
x = (c * e - b * f) / denominador;
y = (a * f - c * d) / denominador;
cout << " la solucion del sistema es\n";
cout << " x = " << x << " y = " << y << endl;
}
return 0;

}