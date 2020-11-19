#include <iostream>
using namespace std;

int main(){
    char user, pc; 
    cout << "Selecciona uno de (R, P, T): ";
    cin >> user;
    pc =  rand() % 4;
    pc = pc == 0 ? 'R' : pc == 1 ? 'P' : 'T';
    cout << "--- Usuario: " << user << " VS " << "Computadora: " << pc << " ---" << endl;
    switch (tolower(user)){
        case 'r':
            switch (tolower(pc)){
                case 'r': cout << "R - R Empate!!" << endl;
                break;
                case 'p': cout << "R - P Papel cubre roca: Gana la computadora" << endl;
                break;
                case 't': cout << "R - T Roca rompe tijeras: Gana el usuario" << endl;
                break;
            }
        break;
        case 'p':
            switch (tolower(pc)){
                case 'r': cout << "P - R Papel cubre roca: Gana el usuario" << endl;
                break;
                case 'p': cout << "P - P Empate!!" << endl;
                break;
                case 't': cout << "P - T Tijeras corta papel: Gana la computadora" << endl;
                break;
            }
        break;
        case 't':
            switch (tolower(pc)){
                case 'r': cout << "T - R Roca rompe tijeras: Gana la computadora" << endl;
                break;
                case 'p': cout << "T - P Tijeras corta papel: Gana el usuario" << endl;
                break;
                case 't': cout << "T - T Empate!!" << endl;
                break;
            }
        break;    
    default:
        cout << "Seleccione correctamente" << endl;
        break;
    }
    return 0;
}