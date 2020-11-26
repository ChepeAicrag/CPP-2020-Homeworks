#include <iostream>
using namespace std;

int invertirNumero(int n){ 
    int invertido = 0; 
    while(n > 0){
        (invertido *= 10) += (n % 10);
        n = n / 10;
    }
    return invertido;
}

bool isPalindrom(int n){
    return n == invertirNumero(n);
}

bool entrada(int n){
    return n > 10;
}

int main(){
    int num;
    cout << "Introduce un número: ";
    cin >> num;
    cout << "Invertido: " << invertirNumero(num) << endl;
    if(!entrada(num))
        cout << "Número incorrecto";
    else
        cout << "El número " << (isPalindrom(num) 
            ? "es palindromo" : "no es palindromo") << endl;        
    return 0;
}