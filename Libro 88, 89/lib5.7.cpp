#include <cstdlib>
#include <iostream>
#define pi 3.2141592
using namespace std;

int main()
{
float radio, area, volumen;
do
{
cout << "valor del radio positivo " << endl;
cin >> radio;
} while (radio <= 0);

// fin entrada de datos

area = 4 * pi * radio * radio;
volumen = 4.0 / 3 * pi * radio * radio * radio;
cout <<"el area y volumen de la esfera de radio r = " << radio<<endl;
cout << "area = " << area << " volumen = " << volumen ;
}
//la salida del valor del radio positivo 6 : el area y volumen de la esferade radio r=6
//area=462.839 volumen = 925.678