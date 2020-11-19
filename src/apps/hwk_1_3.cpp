/*
Escriba un programa que lea dos n´umeros y uno de los siguientes
operadores: +,−,∗, / . El programa debe calcular aplicar la operaci´on
seleccionada a los n´umeros introducidos e imprimir el resultado.
*/

#include <iostream>
using namespace std;

int main(){
    float a, b, r;
    char op;
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce la operación a realizar: ";
    cin >> op;
    switch (op) {
    case '*':
        r = a * b;
        break;
    case '+': 
        r = a + b;;
        break;
    case '-':
        r = a - b;
        break;    
    case '/':
        r = a / b;   
        break;
    default:
        cout << "Seleccione adecuadamente" << endl;
        return 0;
    }
    cout << "El resultado de " << a << op << b << " = " << r << endl;
    return 0;
}