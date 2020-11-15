#include <iostream>
using namespace std;

int main(){
    bool a = true;
    bool b = false;
    cout << "     Tabla de AND" <<endl;
    cout << "|-------------------|" <<endl;
    cout << "|   a  |  b   | out |" <<endl;
    cout << "|   " << a << "  |  "<< b <<"   |  " << (a & b) << "  |" << endl;
    cout << "|   " << a << "  |  "<< !b <<"   |  " << (a & !b) << "  |" << endl;
    cout << "|   " << !a << "  |  "<< b <<"   |  " << (!a & b) << "  |" << endl;
    cout << "|   " << !a << "  |  "<< !b <<"   |  " << (!a & !b) << "  |" << endl;
    
    cout << "     Tabla de OR" <<endl;
    cout << "|-------------------|" <<endl;
    cout << "|   a  |  b   | out |" <<endl;
    cout << "|   " << a << "  |  "<< b <<"   |  " << (a || b) << "  |" << endl;
    cout << "|   " << a << "  |  "<< !b <<"   |  " << (a || !b) << "  |" << endl;
    cout << "|   " << !a << "  |  "<< b <<"   |  " << (!a || b) << "  |" << endl;
    cout << "|   " << !a << "  |  "<< !b <<"   |  " << (!a || !b) << "  |" << endl;
    
    cout << "     Tabla de XOR" <<endl;
    cout << "|-------------------|" <<endl;
    cout << "|   a  |  b   | out |" <<endl;
    cout << "|   " << a << "  |  "<< b <<"   |  " << (((a||b)&&!(a&&b))) << "  |" << endl;
    cout << "|   " << a << "  |  "<< !b <<"   |  " << ((a||!b)&&!(a&&!b)) << "  |" << endl;
    cout << "|   " << !a << "  |  "<< b <<"   |  " << ((!a||b)&&!(!a&&b)) << "  |" << endl;
    cout << "|   " << !a << "  |  "<< !b <<"   |  " << ((!a||!b)&&!(!a&&!b)) << "  |" << endl;
    
    return 0;
}
