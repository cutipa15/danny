#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
int n = 5, m = 3;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
cout << " *";
cout << endl;
}
cout << endl;
for (int i = n; i > 0; i--)
{
for (int j = m; j > 0; j--)
cout << " * ";
cout << endl;
}

return 0;
}
// la salida del segmento es:
// *
// **
// ***
// ****
// ***
// ***
// ***
// ***
// ***