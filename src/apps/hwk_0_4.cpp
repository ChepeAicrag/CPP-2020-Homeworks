#include <iostream>
using namespace std;

int main() {
    cout << 7.1 * 8.3 - 2.2 + 3.2 / (6.1 * 5) << endl;
    cout << 15 % 4 + 5 * 3 - (6 * 4) << endl;
    bool op3 = (6 * 3 == 36/2) || (13 < 3 * 3 + 4)&&!(6 - 2 < 5); 
    cout << op3 << endl;
    return 0;
}