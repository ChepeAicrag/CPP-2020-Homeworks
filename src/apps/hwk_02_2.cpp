#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 0;
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
