#include <iostream>
#include <limits> // n u m e r i c _ l i m i t s
using namespace std;

int main()
{
    // Size of char datatype
    // char, char16_6, char32_t ... bool
    cout << " char :\t\t " << sizeof(char) << " bytes " << endl;
    cout << "Minimum value for char: " << numeric_limits <char> :: min() << "\n";
    cout << "Maximun value for char: " << numeric_limits <char> :: max() << "\n";
    cout << "Minimum value for char: " << (int) numeric_limits <char> :: min() << "\n";
    cout << "Maximum value for char: " << (int) numeric_limits <char> :: max() << "\n";
    return 0;
}