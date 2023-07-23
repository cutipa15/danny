#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int i =1 ;
    while (i*i < 10)
    {
        int j = i;
        while (j *j< 100)
        {
            cout<<i+j<<"";
            j*=2;
    
        }
        i++;
        cout<<endl;
    }
    cout<<"\n*****\n";
}
//la salida es 2359;4610;69