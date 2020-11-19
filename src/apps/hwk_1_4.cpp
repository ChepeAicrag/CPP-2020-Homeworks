/*
Escriba un programa que lea una letra y determine si es vocal o
consonante. Asuma que el usuario no puede introducir n´umeros ni
caracteres especiales. 
*/
#include <iostream>
using namespace std;

int main()
{
    char letra;
    cout << "Introduce una letra: ";
    cin >> letra;
    letra = tolower(letra);
    cout << "La letra " << letra << " es una " << ((letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
    ? "vocal" : "consonante") << endl;
    return 0;
}