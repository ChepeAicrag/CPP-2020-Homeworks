/*
Escriba un programa que calcule el valor aproximado de π.
El programa debe preguntar al usuario el n´umero de t´erminos con los
cuales desea calcular el valor de π.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i;
    double a;
    cout << "Introduce el numero de terminos que desea ocupar para calcular pi: ";
    cin >> n; 
    for(i = 0; i < n; i++)
        a += ( pow(-1, i) ) / ( 2 * i + 1 );
    a = 4 * a;
    cout << "El valor aproximado de pi es " << a << " utilizando " << n << " términos" << endl; 
    return 0;
}
