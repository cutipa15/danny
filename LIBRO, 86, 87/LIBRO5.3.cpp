#include<iostream>
using namespace std;

int main (int argc,char *argv[])
{ 
    int i = 0, n;
    cin >> n;
    while(i<=n)
    if((i% n)==0)
    ++i;
    cout<< i <<endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}
// la salida es a)1 B)2 C)3