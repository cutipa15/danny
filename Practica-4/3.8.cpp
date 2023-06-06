#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
int quinientos, doscientos, cien, cincuenta, veinte, diez;
int cinco, dos, uno, cincuentac, veintec, diezc, cincoc, dosc, unc;
float CantidadOriginal;
long int cantidad;
cout << "Introduzca Cantidad En Euros: ";
cin >> CantidadOriginal;
CantidadOriginal*=100; // se pasa de euros con decimales a centimos
cantidad = (int) CantidadOriginal; // se trunca a centimos de euro
quinientos = cantidad / 50000; cantidad = cantidad % 50000;
doscientos = cantidad / 20000; cantidad = cantidad % 20000;
cien = cantidad / 10000; cantidad = cantidad % 10000;
cincuenta = cantidad / 5000; cantidad = cantidad % 5000;
veinte = cantidad / 2000; cantidad = cantidad % 2000;

diez = cantidad / 1000; cantidad = cantidad % 1000;
cinco = cantidad / 500; cantidad = cantidad % 500;
dos = cantidad / 200; cantidad = cantidad % 200;
uno = cantidad / 100; cantidad =cantidad % 100;
cincuentac = cantidad / 50; cantidad = cantidad % 50;
veintec = cantidad / 20; cantidad = cantidad % 20;
diezc = cantidad / 10; cantidad = cantidad % 10;
cincoc = cantidad / 5; cantidad = cantidad % 5;
dosc = cantidad / 2; cantidad = cantidad % 2;
unc = cantidad;
cout << " cambio en moneda con el menor numero " << endl;
cout << " cantidad original en centimos: "<< CantidadOriginal << endl;
cout << " billetes de quinientos euros: " << quinientos << endl;
cout << " billetes de doscientos euros: "<< doscientos << endl;
cout << " billetes de cien euros : " << cien << endl;
cout << " billetes de cincuenta euros: " << cincuenta << endl;
cout << " billetes de veinte euros: "<< veinte << endl;
cout << " billetes de diez euros : " << diez << endl;
cout << " billetes de cinco euros: " << cinco << endl;
cout << " monedad de dos euros: "<< dos << endl;
cout << " monedad de un euro: " << uno << endl;
cout << " monedas de cincuenta centimos de euros: "<<cincuentac<<endl;
cout << " monedad de veinte centimos de eruro: "<< veintec << endl;
cout << " monedad de diez centimos de euro: " << diezc << endl;
cout << " monedas de cinco centimos de euros: " << cincoc << endl;
cout << " monedad de dos centimos de eruro: "<< dosc << endl;
cout << " monedad de un centimo de euro: " << unc << endl;
return 0;
}