#include <iostream>
#include <math.h>
using namespace std; 
void circulo(); 
void cuadrado();
void triangulo();
void rectangulo();

int main(){
    bool salir = false; 
    while(!salir){
        int opcion = 5;
        cout << "Menu" << endl; 
        cout << "       1) Círculo" << endl;
        cout << "       2) Cuadrado" << endl;
        cout << "       3) Triangulo equilátero" << endl;
        cout << "       4) Rectángulo" << endl;
        cout << "       5) Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            circulo();
            break;
        case 2:
            cuadrado();
            break;
        case 3: 
            triangulo();
            break;
        case 4: 
            rectangulo();
            break;
        case 5: 
            salir = true; 
            break;    
        default:
            break;
        }
        cout << "-------------------" << endl;
    }
    return 0;
}

void circulo(){
    float radio;
    cout << "Introduce el valor del radio: ";
    cin >> radio; 
    cout << "El área es " << (M_PI * radio * radio) << endl;
    cout << "El perímetro es: " << (2 * M_PI * radio) << endl;
}

void cuadrado(){
    float lado;
    cout << "Introduce el valor del lado: ";
    cin >> lado; 
    cout << "El área es: " << ( lado * lado) << endl;
    cout << "El perímetro es: " << (lado * 4) << endl; 
}

void triangulo(){
    float lado;
    cout << "Introduce el valor del lado: "; 
    cin >> lado;
    cout << "El área es: " << ( (lado * lado * sqrt(3)) / 4) << endl;
    cout << "El perímetro es: " << (lado * 3) << endl;
}

void rectangulo(){
    float base, altura; 
    cout << "Introduce el valor de la altura: ";
    cin >> altura;
    cout << "Introduce el valor de la base: ";
    cin >> base;
    cout << "El área es: " << (base * altura) << endl;
    cout << "El perímetro es: " << (2 * (base + altura)) << endl;
}
