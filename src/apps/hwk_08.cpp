#include <iostream> 
using namespace std;

int main(){
    // Punto 1 - Despliega el nonbre a partir de código ASCII
    int l1 = 74, l2 = 79, l3 = 83, l4 = 69; 
    cout <<"Nombre: " << char(l1) << char(l2) << char(l3) << char(l4) << endl;
    
    // Punto 2 - Condificación
    // Aplicando operados logicos para realizar el mapeo
    int l1_2 = l1 << 1,
        l2_2 = l2 >> 3 , 
        l3_2 = l3 + ! ( !l3 && l3 ),
        l4_2 = l4 + !l4 - (!l4 ^ 4);

    // Punto 3 - Despliega el nombre codificado
    cout <<"Nombre codificado: " << char(l1_2) << char(l2_2) << char(l3_2) << char(l4_2) <<endl;

    // Punto 4 - Decodificación
    int l1_3 = l1_2 >> 1,
        l2_3 = (l2_2 << 3 ) + 7, 
        l3_3 = l3_2 - ! ( !l3_2 && l3_2 ), 
        l4_3 = l4_2 - !l4 + (!l4 ^ 4);
    
    // Punto 5 - Despliega el nombre
    cout <<"Nombre decodificado: " << char(l1_3) << char(l2_3) << char(l3_3) << char(l4_3) <<endl;
    return 0;
}