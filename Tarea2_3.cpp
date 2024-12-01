#include <iostream>
#include <cmath> // Para las funciones trigonométricas y sqrt

using namespace std;

int main() {
    // Declaracion
    int F, anguloX, anguloY, anguloZ;
    double pi=3.141592;
    cout<<"Ingrese el valor de la Fuerza : "; cin>>F; // Magnitud de la fuerza (lb)
    cout<<"Ingrese el valor del angulo con respecto a x:"; cin>> anguloX; // Ángulo con el eje x (grados)
    cout<<"Ingrese el valor del angulo con respecto a y:"; cin>> anguloY;  // Ángulo con el eje y (grados)
    cout<<"Ingrese el valor del angulo con respecto a z:"; cin>> anguloZ;  // Ángulo con el eje z (grados)

    // Conversión de ángulos a radianes
    double anguloXRadianes = anguloX * pi / 180;
    double anguloYRadianes = anguloY * pi / 180;
    double anguloZRadianes = anguloZ * pi / 180;

    // Cálculo de las componentes
    double Fx = F * cos(anguloXRadianes);
    double Fy = F * cos(anguloYRadianes);
    double Fz = F * cos(anguloZRadianes);

    // Impresión de resultados
    cout << "Resultados del calculo:" << endl;
    cout << "Componente Fx: " << Fx << " lb" << endl;
    cout << "Componente Fy: " << Fy << " lb" << endl;
    cout << "Componente Fz: " << Fz << " lb" << endl;

    // Notación vectorial
    cout << "La fuerza en notacion vectorial es:" << endl;
    cout << "F = (" << Fx << ")i + (" << Fy << ")j + (" << Fz << ")k" << endl;

    return 0;
}

