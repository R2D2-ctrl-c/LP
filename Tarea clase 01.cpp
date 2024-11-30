#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // 1) Declaraci�n
    double alturaP, baseP, alturaQ, baseQ;
    double alpha, beta, theta, R, gamma, angulofinal;
    double P = 76, Q = 52, pi=3.141592;

    //Datos
    cout << "Ingrese el valor de la altura de P: "; cin >> alturaP;
    cout << "Ingrese el valor de la base de P: "; cin >> baseP;
    cout << "Ingrese el valor de la altura de Q: "; cin >> alturaQ;
    cout << "Ingrese el valor de la base de Q: "; cin >> baseQ;

    // 2) C�lculo de los �ngulos
    alpha = atan(baseP / alturaP) * (180 / pi); // �ngulo de P en grados
    beta = atan(baseQ / alturaQ) * (180 / pi);  // �ngulo de Q en grados

    // C�lculo del �ngulo entre los vectores P y Q
    theta = 90.0 + alpha + beta; // �ngulo entre P y Q en grados
    double thetaRad = theta * (pi / 180); // Conversi�n a radianes

    // 3) Magnitud de la resultante
    R = sqrt(P * P + Q * Q + 2 * P * Q * cos(thetaRad)); // Magnitud de la resultante
    
    // �ngulo entre P y Q (omega)
    double omega= 180-theta;
    double omegaRad= omega*(pi/180);

    // 4) C�lculo del �ngulo gamma(Ley de senos)
    gamma = asin((P * sin(omegaRad)) / R) * (180 / pi); // �ngulo gamma en grados

    // 5) Resultados
    cout << "\nResultados del c�lculo:\n";
    cout << "1. Angulo alpha: " << alpha << " grados\n";
    cout << "2. Angulo beta: " << beta << " grados\n";
    cout << "3. Magnitud de la resultante (R): " << R << " kN\n";
    cout << "4. Angulo de la resultante (R): " << gamma << " grados\n";
    cout << "5. Angulo entre los vectores P y Q: " << omega << " grados\n";
    cout<<endl;
    system ("pause");
}

