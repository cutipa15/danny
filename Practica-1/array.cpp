#include <iostream>
using namespace std;

void llenar_impar(int array[], int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        array[i] = num;
        num += 2;
    }
    cout << "Indices 0,2,4,6,8: ";
    for (int i = 0; i < n; i += 2) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[10];
    llenar_impar(array, 10);
    return 0;
}