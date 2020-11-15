#include <iostream>
using namespace std;

int main(){
    double x1 = 10, y1 = 10,
           x2 = 3, y2 = 5;
    cout << "Los puntos son: ("<<x1<<", "<<y1<<") y ("<<x2<<", "<<y2<<")."<<endl;
    cout << "La pendiente es: " << ( y2 - y1 ) / ( x2 - x1 ) << endl;
    return 0;
}