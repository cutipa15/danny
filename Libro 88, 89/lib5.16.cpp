#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
char car, Comienzo = 'Z';
for (Comienzo = 'Z'; Comienzo >= 'A'; Comienzo --)
{
for ( car = Comienzo; car >= 'A'; car--)
cout <<car << ' ';
cout << endl;
}

}
//Z Y X W V U T S R Q P O N M L K J I H G F E D C B A 
//Y X W V U T S R Q P O N M L K J I H G F E D C B A   
//X W V U T S R Q P O N M L K J I H G F E D C B A     
//W V U T S R Q P O N M L K J I H G F E D C B A       
//V U T S R Q P O N M L K J I H G F E D C B A 
//U T S R Q P O N M L K J I H G F E D C B A   
//T S R Q P O N M L K J I H G F E D C B A     
//S R Q P O N M L K J I H G F E D C B A       
//R Q P O N M L K J I H G F E D C B A         
//Q P O N M L K J I H G F E D C B A 
//P O N M L K J I H G F E D C B A 
//O N M L K J I H G F E D C B A 
//N M L K J I H G F E D C B A 
//M L K J I H G F E D C B A 
//L K J I H G F E D C B A 
//K J I H G F E D C B A 
//J I H G F E D C B A 
//I H G F E D C B A 
//H G F E D C B A 
//G F E D C B A 
//F E D C B A   
//E D C B A     
//D C B A       
//C B A
//B A
//A