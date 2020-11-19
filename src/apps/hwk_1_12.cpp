/*
Escriba un programa capture un n´umero e imprima un mensaje indicando
si es un n´umero primo.
 */
#include <iostream>
using namespace std;

int main(){
    int n, i; 
    bool esPrimo = true;
    cout << "Introduce un número: ";
    cin >> n;
    if(n > 1){
        for ( i = 2; i < n && esPrimo; i++)
            if( n % i == 0) 
              esPrimo = false;
    }else
         esPrimo = false;
    cout << "El número " << n <<( esPrimo ? " es primo" : " no es primo" )<< endl; 
    return 0;
}
