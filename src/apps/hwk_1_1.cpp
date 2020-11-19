#include <iostream>
using namespace std;

int main (){
    int anio; 
    cout << "Introduce el año: ";
    cin >> anio; 
    cout << "El año " << (( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) ? "es bisiesto" : "no es bisiesto") << endl; 
    return 0;
}