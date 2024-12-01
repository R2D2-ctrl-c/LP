#include <iostream>
#include <math.h> // Para funciones matemáticas como sqrt y atan

using namespace std;

int main() 
{	
    // Declaración F1
    double pi=3.141592;
    double Fx1, Fy1, Fz1; // Componentes en x, y y z
    double magnitud;   // Magnitud de la fuerza resultante
    double alpha, beta, gamma; // Ángulos directores en grados

    // Entrada de datos
    cout << "Ingrese el valor de Fx1: "; cin >> Fx1; // Componente en x
    cout << "Ingrese el valor de Fy1: "; cin >> Fy1; // Componente en y
    cout << "Ingrese el valor de Fz1: "; cin >> Fz1; // Componente en z
    
    // Declaración F2
    double Fx2, Fy2, Fz2; // Componentes en x, y y z

    // Entrada de datos
    cout << "Ingrese el valor de Fx2: "; cin >> Fx2; // Componente en x
    cout << "Ingrese el valor de Fy2: "; cin >> Fy2; // Componente en y
    cout << "Ingrese el valor de Fz2: "; cin >> Fz2; // Componente en z

    // Cálculo de la magnitud de la fuerza
    magnitud = sqrt(pow(Fx1+Fx2, 2) + pow(Fy1+Fy2, 2) + pow(Fz1+Fz2, 2));

    // Cálculo de los cosenos directores
    double cos_alpha = (Fx1+Fx2) / magnitud;
    double cos_beta = (Fy1+Fy2) / magnitud;
    double cos_gamma = (Fz1+Fz2)/ magnitud;

    // Conversión a ángulos en grados
    alpha = acos(cos_alpha) * (180/ pi);
    beta = acos(cos_beta) * (180/ pi);
    gamma = acos(cos_gamma) * (180/ pi);

    // Resultados
    cout << "Resultados del calculo:" << endl;
    cout << "Magnitud de la fuerza: " << magnitud << " unidades" << endl;
    cout << "Angulo alpha (con eje x): " << alpha << " grados" << endl;
    cout << "Angulo beta (con eje y): " << beta << " grados" << endl;
    cout << "Angulo gamma (con eje z): " << gamma << " grados" << endl;

    system("pause");
}

