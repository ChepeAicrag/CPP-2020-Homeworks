#include <iostream>
using namespace std;

int main(){
    int numeros [15];
    int i, j, aux, l;
    l = sizeof(numeros)/sizeof(numeros[0]);

    for(i = 0; i < l; i++){
        cout << "Introduce el numero [" << ( i + 1) << "]: ";
        cin >> numeros[i];
    }

    for(i = 0; i < l - 1; i++){
        for(j = 0; j < l - 1 -i ; j++){
            if(numeros[j] > numeros[j + 1]){
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    
    for(i = 0; i < l; i++) cout << numeros[i] << " ";
    cout << endl;
    return 0;
}