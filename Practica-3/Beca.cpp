#include<iostream>
#include<cmath>
using namespace std;
int main(){

   double promedio;
   int distancia;
   double ingresos;

   cout <<"INGRESE EL PROMEDIO: ";
   cin >>promedio;

   cout <<"INGRESE LA DISTANCIA: ";
   cin >>distancia;

   cout << "INGRESE LOS INGRESOS: ";
   cin >>ingresos;
   
 if(promedio > 18 ||distancia > 40 && ingresos < 700){
    cout<< "EL ESTUDIANTE ES ELEGIDO PARA UNA BECA"<<endl;
   }
   else {
    cout<<"EL ESTUDIANTE NO ES ELEGIDO PARA UNA BECA." <<endl;

   }
   return 0;



}
