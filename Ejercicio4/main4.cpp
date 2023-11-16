#include <iostream>
#include <iomanip>
using namespace std;

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;

        double calcularEnergia(double masa) {
            return masa * c * c;
        }

        double calcularFuerza(double masa, double aceleracion) {
            return masa * aceleracion;
        }

        double calcularVelocidadFinal(double velocidadInicial, double aceleracion, double tiempo) {
            return velocidadInicial + (aceleracion * tiempo);
        }
    }
}

int main() {
    int opcion;
    double resultado, masa, aceleracion, velocidadInicial, tiempo;

    cout << "Selecciona la operacion que deseas realizar:" << endl;
    cout << "1. Calcular Energia" << endl;
    cout << "2. Calcular Fuerza" << endl;
    cout << "3. Calcular Velocidad Final" << endl;
    cout << "Ingrese el numero de la opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la masa: ";
            cin >> masa;
            resultado = Ciencia::Fisica::calcularEnergia(masa);
            cout << "Energia: " << resultado << endl;
            break;
        case 2:
            cout << "Ingresa la masa: ";
            cin >> masa;
            cout << "Ingresa la aceleracion: ";
            cin >> aceleracion;
            resultado = Ciencia::Fisica::calcularFuerza(masa, aceleracion);
            cout << "Fuerza: " << resultado << endl;
            break;
        case 3:
            cout << "Ingresa la velocidad inicial: ";
            cin >> velocidadInicial;
            cout << "Ingresa la aceleracion: ";
            cin >> aceleracion;
            cout << "Ingresa el tiempo: ";
            cin >> tiempo;
            resultado = Ciencia::Fisica::calcularVelocidadFinal(velocidadInicial, aceleracion, tiempo);
            cout << "Velocidad final: " << resultado << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
