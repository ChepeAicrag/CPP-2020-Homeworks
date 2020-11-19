#include <iostream>
using namespace std;

int main(){
    int j = 2, a = 0, b = 0, c = 0; 
    cout << "Triples de pitagoras" << endl;
    while(a < 500 && b < 500 && c < 500){
       cout << "a = " << a << " b = " << b << " c = " << c << endl;
       a = (j * j) - 1;
       b = 2 * j;
       c = (j * j) + 1;
       j++;
    }
    return 0;
}