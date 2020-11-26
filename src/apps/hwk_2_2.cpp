#include <iostream>
using namespace std;

int mcd(int a, int b) {
    if(b == 0) return a;
    return mcd(b, a % b);
}


int main(){
    int a, b;
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "El mcd de " << a <<  " y " << b 
         << " es: " <<  mcd(a, b) << endl;
    

   return 0; 
}

