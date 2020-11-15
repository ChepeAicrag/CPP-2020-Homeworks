#include <iostream> 
using namespace std;

int main(){
    // Punto 1 - Despliega el nombre a partir de código ASCII
    int l1 = 74, l2 = 79, l3 = 83, l4 = 69; 
    cout <<"Nombre: " << char(l1) << char(l2) << char(l3) << char(l4) << endl;
    
    // Punto 2 - Codificación
    // La función matematica empleada es calcular el cuadrado del número ASCII
    int l1_2 = l1 * l1,
        l2_2 = l2 * l2, 
        l3_2 = l3 * l3, 
        l4_2 = l4 * l4;
    
    // Punto 3 - Despliega el nombre codificado
    cout <<"Nombre codificado: " << char(l1_2) << char(l2_2) << char(l3_2) << char(l4_2) <<endl;

    return 0;
}