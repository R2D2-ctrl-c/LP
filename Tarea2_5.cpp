#include <iostream>
#include <math.h> // Para funciones matem�ticas como sqrt y atan

using namespace std;

int main() 
{
    // Declaraci�n de las posiciones
    double Ax, Ay, Az, Bx, By, Bz; // Coordenadas de los puntos A y B
    cout << "Ingrese las coordenadas de A (x): "; cin >> Ax;
    cout << "Ingrese las coordenadas de A (y): "; cin >> Ay;
    cout << "Ingrese las coordenadas de A (z): "; cin >> Az;
    cout << "Ingrese las coordenadas de B (x): "; cin >> Bx;
    cout << "Ingrese las coordenadas de B (y): "; cin >> By;
    cout << "Ingrese las coordenadas de B (z): "; cin >> Bz;

    // Declaraci�n de la magnitud de la fuerza
    double T; // Tensi�n en el cable
    cout << "Ingrese la magnitud de la tension (N): ";
    cin >> T;

    // C�lculo del vector posici�n AB
    double ABx = Bx - Ax;
    double ABy = By - Ay;
    double ABz = Bz - Az;

    // C�lculo de la magnitud de AB
    double ABmagnitud = sqrt(pow(ABx, 2) + pow(ABy, 2) + pow(ABz, 2));

    // C�lculo del vector unitario en la direcci�n de AB
    double u_x = ABx / ABmagnitud;
    double u_y = ABy / ABmagnitud;
    double u_z = ABz / ABmagnitud;

    // C�lculo de las componentes de la fuerza F
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
  

