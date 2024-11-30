#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // Declaracion
    // Usar float para mostrar los decimales
    float F1, F2, anguloFuerzas, anguloParalelogramo, magnitudResultante, anguloTheta, direccionPhi, anguloF1,anguloF2;
    double pi=3.141592;
    cout << "Ingrese el valor de la Fuerza 1: "; cin >> F1 ;
	cout << "Ingrese el valor de la Fuerza 2: "; cin>> F2 ;
	
	// Angulo entre F1 y la horizontal (grados)
	cout << "Ingrese el valor del Angulo entre F1 y la horizontal(grados): "; cin >> anguloF1 ;
   
	// Angulo entre F2 y la vertical (grados)
	cout << "Ingrese el valor del Angulo entre F2 y la vertical(grados): "; cin >> anguloF2;

    // Angulo entre las dos fuerzas
    anguloFuerzas = 90 - anguloF1 - anguloF2; // En grados
    anguloParalelogramo = 360 - 2 * anguloFuerzas; // Cálculo del ángulo externo
    anguloParalelogramo /= 2; // Ángulo del triángulo

    // Conversión de ángulos a radianes
    double anguloRadianes = anguloParalelogramo * pi / 180;

    // Ley de cosenos para la magnitud de la fuerza resultante
    magnitudResultante = sqrt(pow(F1, 2) + pow(F2, 2) - 2 * F1 * F2 * cos(anguloRadianes));

    // Ley de senos
    anguloTheta = asin((F2 * sin(anguloRadianes)) / magnitudResultante) * (180 / pi);

    // Dirección de la fuerza resultante (f)
    direccionPhi = anguloTheta + anguloF1;

    // Impresión de resultados
    cout << "Resultados del calculo:" << endl;
    cout << "Magnitud de la fuerza resultante (FR): " << magnitudResultante << " N" << endl;
    cout << "Dirección de la fuerza resultante (f): " << direccionPhi << " grados" << endl;
    return 0;
}

