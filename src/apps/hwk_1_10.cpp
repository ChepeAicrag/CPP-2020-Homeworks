#include <iostream>;
using namespace std;

int main(){
    int n; 
    cout << "Introduce un número para mostrar su sucesión: ";
    cin >> n; 
    while(n > 1){
        cout << n << " ";
        n = (n % 2 != 0) ? 3 * n + 1 : n / 2;
    }
    cout << n << endl;
    return 0;
}