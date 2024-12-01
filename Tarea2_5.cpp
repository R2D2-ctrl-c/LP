#include <iostream>
#include <math.h> // Para funciones matemáticas como sqrt y atan

using namespace std;

int main() 
{
    // Declaración de las posiciones
    double Ax, Ay, Az, Bx, By, Bz; // Coordenadas de los puntos A y B
    cout << "Ingrese las coordenadas de A (x): "; cin >> Ax;
    cout << "Ingrese las coordenadas de A (y): "; cin >> Ay;
    cout << "Ingrese las coordenadas de A (z): "; cin >> Az;
    cout << "Ingrese las coordenadas de B (x): "; cin >> Bx;
    cout << "Ingrese las coordenadas de B (y): "; cin >> By;
    cout << "Ingrese las coordenadas de B (z): "; cin >> Bz;

    // Declaración de la magnitud de la fuerza
    double T; // Tensión en el cable
    cout << "Ingrese la magnitud de la tension (N): ";
    cin >> T;

    // Cálculo del vector posición AB
    double ABx = Bx - Ax;
    double ABy = By - Ay;
    double ABz = Bz - Az;

    // Cálculo de la magnitud de AB
    double ABmagnitud = sqrt(pow(ABx, 2) + pow(ABy, 2) + pow(ABz, 2));

    // Cálculo del vector unitario en la dirección de AB
    double u_x = ABx / ABmagnitud;
    double u_y = ABy / ABmagnitud;
    double u_z = ABz / ABmagnitud;

    // Cálculo de las componentes de la fuerza F
    double Fx = T * u_x;
    double Fy = T * u_y;
    double Fz = T * u_z;

    // Resultados
    cout << "\nResultados del calculo:" << endl;
    cout << "Vector unitario (u): (" << u_x << ", " << u_y << ", " << u_z << ")" << endl;
    cout << "Componentes de la fuerza F:" << endl;
    cout << "Fx = " << Fx << " N" << endl;
    cout << "Fy = " << Fy << " N" << endl;
    cout << "Fz = " << Fz << " N" << endl;
    system("pause");
    }
  

