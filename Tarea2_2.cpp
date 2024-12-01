#include <iostream>
#include <math.h> // Para las funciones trigonométricas

using namespace std;

int main() 
{	
    // Declaracion
    int Fx,Fy;
    double magnitud, angulo, pi=3.141592;
    // Definicion de las componentes de la fuerza
    cout << "Ingrese el valor de Fx: "; cin >> Fx ; // Componente en x
	cout << "Ingrese el valor de Fy: "; cin>> Fy ; // Componente en y
  

    // Calculo del angulo (en grados)
    angulo = atan2(Fy, Fx) * (180/ pi); // Conversión de radianes a grados

    // Calculo de la magnitud de la fuerza
    magnitud = sqrt(pow(Fx, 2) + pow(Fy, 2));

    // Impresión de los resultados
    cout << "Resultados del calculo:" << endl;
    cout << "Magnitud de la fuerza: " << magnitud << " N" << endl;
    cout << "Angulo con la horizontal: " << angulo << " grados" << endl;
    cout<<endl;
    system ("pause");

    return 0;
}

