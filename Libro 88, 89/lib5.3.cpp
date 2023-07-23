#include <cstdlib>
#include <iostream>
#define max 10
using namespace std;
int main()
{
int np = 0, nn = 0 , nulos = 0, dato;
for (int i = 1; i <= max; i++)
{
cin >> dato;
if (dato > 0)
np++;
else if (dato < 0)
nn++;

else
nulos++;
}
cout <<"positivos negativos nulos "<< endl;
cout << np << " " << nn <<" " << nulos;

}
//la salida es
//-2
//2
//4
//-9
//0
//-5
//8
//-6
//8
//0
//positivos negativos nulos
//4 4 2