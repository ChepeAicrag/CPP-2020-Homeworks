#include <iostream>
#include <math.h>
using namespace std;
float* concatena(float*, int&);
int* leerNum(int*);

int main(){
    int n, i = 0;
    float s;

    // 1.- Aplicacion de punteros
    int * lim = leerNum(&n);

    // 2.- Aplicamos arreglos 
    // 3.- Aplicacion de apuntadores
    // 4.- Aplicacion de operador new
    float* t = new float[*lim];
    while(i < n)
        t[i] = *concatena(&s, i);
    
    // Aplicacion de operador delete
    delete[] t;
    
    cout << "El resultado de la serie geometrica es " << s << endl;
    cout << "El resultado de la serie geometrica es " << t[i] << endl;
    
    return 0;
}

// 6.- Paso de parametro por referencia como apuntador
// 7.- Variable de retorno por apuntador
int* leerNum(int* n){
    cout << "Introduce el valor de n: ";
    cin >> *n;
    return n;
}

// 8.- Aplicando variable de retorno como apuntador (s)
// 9.- Aplicando paso de parametro por referencia (i)
float* concatena(float *s, int& i){
    *s += pow(0.5, i);
    i++;
    return s;
}
