#include <iostream> 
using namespace std;

int main(){
    // Punto 1 - Despliega el nombre a partir de código ASCII
    int l1 = 74, l2 = 79, l3 = 83, l4 = 69; 
    cout <<"Nombre: " << char(l1) << char(l2) << char(l3) << char(l4) << endl;
    
    // Punto 2 - Codificación
    // La función matematica ahora consiste en el producto del valor introducido por
    // el usuario y el código ASCII
    int seed;
    cout << "Introduce un valor para codificación:"<<endl;
    cin >> seed; 

    int l1_2 = l1 * seed,
        l2_2 = l2 * seed, 
        l3_2 = l3 * seed, 
        l4_2 = l4 * seed;
    
    // Punto 3 - Despliega nombre codificado
    cout <<"Nombre codificado: " << char(l1_2) << char(l2_2) << char(l3_2) << char(l4_2) <<endl;
    
    // Punto 4 - Decodificación
    int anSeed;
    cout << "Introduce un valor para decodificación:"<<endl;
    cin >> anSeed;

    int l1_3 = l1_2 / anSeed,
        l2_3 = l2_2 / anSeed, 
        l3_3 = l3_2 / anSeed, 
        l4_3 = l4_2 / anSeed;
    
    // Punto 5 - Despliega el nombre decodificado
    cout <<"Nombre decodificado: " << char(l1_3) << char(l2_3) << char(l3_3) << char(l4_3) <<endl;
    
    return 0;
}