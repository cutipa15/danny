
#include <iostream>
using namespace std;
int main(){
int k;

std::cout <<"ingrese el numero k positivo: ";
std ::cin >>k;

for (int i = 0; i < k ; i--){ 
for (int j = 0 ; j < k - i; j++){
    std::cout<<2*(j+1)<<" ";
}
   std:: cout <<std::endl;
}


return 0;
}
