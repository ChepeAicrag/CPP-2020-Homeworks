#include <iostream>
using namespace std;
// Modifcacion de hwk_2_3

// 1.- Paso de parametro por referencia
// 2.- Retorno de variable por referencia
int& invertirNumero(int n, int& invertido){ 
    while(n > 0){
        (invertido *= 10) += (n % 10);
        n = n / 10;
    }
    return invertido;
}
// 3.- Paso de parametro por apuntador
bool entrada(int* n){
    return *n > 10;
}

// 4.- Paso de parametro por referencia como apuntador
// 5.- Variable de retorno por apuntador
int* leerNum(int* n){
    cout << "Introduce un numero: ";
    cin >> *n;
    return n;
}

int main(){
    int num, numInvertido = 0;
    int* numero = leerNum(&num); // Aplicacion de apuntadores
    int &anum = *numero, &ainv = numInvertido; // 7.- Aplicacion de variable de referencia 
    if(!entrada(&anum)){ // 8.- Aplicacion de operador de direccionamiento
        cout << "Numero incorrecto" << endl;
    }else{
        int &inv = invertirNumero(num, ainv);
        cout << "El numero " << (anum == inv 
            ? "es palindromo" : "no es palindromo") << endl;
    }
    return 0;
}