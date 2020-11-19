/*
Escriba un programa que imprima los primeros 100 t´erminos de la serie de
Fibonacci.
*/
#include <iostream>
using namespace std;

int main(){
    double termino;
    int a, b = 1, i;
    cout << a << " " << b << " ";
    for (i = 1; i < 99; i++){
        termino = a + b;
        cout << termino << " ";
        a = b;
        b = termino;
    }
    cout << endl;
    return 0;
}