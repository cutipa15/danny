#include <cstdlib>
#include <iostream>
#define m 30
using namespace std;
int main()
{
int i, suma = 0;
for (i = 1; i <= m; i++)
suma += 2 * i ;
cout << "La suma de los 30 primeros pares: " << suma << endl;
cout << " mediante formula: " << (2+ 2*m)*m/2 << endl;

}
//la salida es la suma de los 30 primeros pares :930 mediante formufa :930