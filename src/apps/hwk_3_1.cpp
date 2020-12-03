#include <iostream>
using namespace std;
double& m(double, double, double*, double*, double&);

int main(){
    double x1 = 10, y1 = 10,
           x2 = 3, y2 = 5,
           resultado, pen;

    // 1.- Aplicando referencia a las coordenadas del primer punto
    double &ax1 = x1,  &ay1 = y1, &pendiente = pen; 
    
    // 2.- Aplicando punteros al segundo punto
    // 3.- Ademas se aplica el operador de direccionamiento
    double *px2 = &x2, *py2 = &y2;  

    // Podemos obtener el valor de la pendiente en resultado
    // y en la variable pendiente
    pendiente = m(ax1, ay1, px2, py2, resultado);
    cout << "Los puntos son: ("<<x1<<", "<<y1<<") y ("<<x2<<", "<<y2<<")."<<endl;
    cout << "La pendiente es: " << resultado << endl;
    cout << "La pendiente es:" << pendiente << endl;
    return 0;
}


// 4.- Aplicando paso por referencia par ael resultado
// 5.- Aplicando paso por apuntadora para los puntos
// 6.- Aplicando un retorno a la variable de referencia
double& m(double x1, double y1, double* x2, double* y2, double &resultado){
    return resultado = ( *y2 - y1 ) / ( *x2 - x1 );
}