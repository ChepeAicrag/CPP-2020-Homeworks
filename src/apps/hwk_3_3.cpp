#include <iostream>
using namespace std;
int* leerNum(int*);
int& valor(int& n);

// Modificacion de hwk_1_10
int main(){
    int n; 

    // 1.- Aplicacion de punteros
    // 2.- Aplicacion de operador de direccionamiento
    int * lim = leerNum(&n);

    cout << n << " ";
    while(*lim > 1){
        int& num = valor(n);
        cout << num << " "; 
    }
    cout << endl;
    return 0;
}

// 3.- Paso de parametro por referencia como apuntador
// 4.- Retorno de variable por apuntador
int* leerNum(int* n){
    cout << "Introduce un numero para mostrar su sucesion: ";
    cin >> *n;
    return n;
}

// 5.- Paso de parametro por referencia
// 6.- Retorno de variable por referencia
int& valor(int & n){
    return n = (n % 2 != 0) ? 3 * n + 1 : n / 2;
}