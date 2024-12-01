#include <iostream>
#include <cmath> // Para las funciones trigonom�tricas y sqrt

using namespace std;

int main() {
    // Declaracion
    int F, anguloX, anguloY, anguloZ;
    double pi=3.141592;
    cout<<"Ingrese el valor de la Fuerza : "; cin>>F; // Magnitud de la fuerza (lb)
    cout<<"Ingrese el valor del angulo con respecto a x:"; cin>> anguloX; // �ngulo con el eje x (grados)
    cout<<"Ingrese el valor del angulo con respecto a y:"; cin>> anguloY;  // �ngulo con el eje y (grados)
    cout<<"Ingrese el valor del angulo con respecto a z:"; cin>> anguloZ;  // �ngulo con el eje z (grados)

    // Conversi�n de �ngulos a radianes
    double anguloXRadianes = anguloX * pi / 180;
    double anguloYRadianes = anguloY * pi / 180;
    double anguloZRadianes = anguloZ * pi / 180;

    // C�lculo de las componentes
    double Fx = F * cos(anguloXRadianes);
    double Fy = F * cos(anguloYRadianes);
    double Fz = F * cos(anguloZRadianes);

    // Impresi�n de resultados
    cout << "Resultados del calculo:" << endl;
    cout << "Componente Fx: " << Fx << " lb" << endl;
    cout << "Componente Fy: " << Fy << " lb" << endl;
    cout << "Componente Fz: " << Fz << " lb" << endl;

    // Notaci�n vectorial
    cout << "La fuerza en notacion vectorial es:" << endl;
    cout << "F = (" << Fx << ")i + (" << Fy << ")j + (" << Fz << ")k" << endl;

    return 0;
}

