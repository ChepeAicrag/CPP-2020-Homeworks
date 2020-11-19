/* 
    Calcular serie geometrica
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i;
    float s;
    cout << "Introduce el valor de n: ";
    cin >> n;
    for(i = 0; i < n; i++) 
        s += pow(0.5, i);
    cout << "El resultado de la serie geometrica es " << s << endl;    
    return 0;
}