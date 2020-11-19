/*
Escriba un programa que capture los coeficientes a, b, c de un polinomio
de segundo orden, e imprima las raices del polinomio.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x1, x2, a, b, c;
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;
    if( a == 0){
        cout << "El valor de a no puede ser 0";
        return 0;
    }
    x1 = (-b + sqrt( ( b * b ) - (4 * a * c) ) ) / (2 * a);
    x2 = (-b - sqrt( ( b * b ) - (4 * a * c) ) ) / (2 * a);
    cout <<"Las raices del polinomio son: x1 = " << x1 <<  " y x2 = "<< x2 << endl;
    return 0;
}