#include <iostream>
#include <math.h>
using namespace std;
const unsigned long m = pow(2, 31) - 1, a = pow(7, 5), q = 127773, r = 2836;

int main(){
    unsigned long j = 46010;
    int n, i;
    cout << "Numeros pseudoaleatorios a mostrar: ";
    cin >> n;
    for(i = 0; i <= n; i++){
        cout << j << endl;
        j = a * (j % q) - r * trunc( j / q);
        j = j >= 0 ? j : j + m;
    }
    return 0;
}