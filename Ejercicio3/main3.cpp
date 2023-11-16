#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

namespace Geometria {
    class Cuadrado {
    private:
        double lado;

    public:
        Cuadrado(double l) : lado(l) {}

        double calcularArea() {
            return lado * lado;
        }

        double calcularPerimetro() {
            return 4 * lado;
        }
    };

    class Circulo {
    private:
        double radio;

    public:
        Circulo(double r) : radio(r) {}

        double calcularArea() {
            return M_PI * radio * radio;
        }

        double calcularPerimetro() {
            return 2 * M_PI * radio;
        }
    };

    class Triangulo {
    private:
        double base;
        double altura;

    public:
        Triangulo(double b, double h) : base(b), altura(h) {}

        double calcularArea() {
            return (base * altura) / 2;
        }

        double calcularPerimetro() {
            return base + altura + sqrt(base * base + altura * altura);
        }
    };
}

int main() {
    int opcion;
    double resultado, lado, radio, base, altura;

    cout << "Selecciona la figura geométrica que deseas calcular:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Círculo" << endl;
    cout << "3. Triángulo" << endl;
    cout << "Ingrese el número de la opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa el lado del cuadrado: ";
            cin >> lado;
            Geometria::Cuadrado cuadrado(lado);
            resultado = cuadrado.calcularArea();
            cout << "Área del cuadrado: " << resultado << endl;
            resultado = cuadrado.calcularPerimetro();
            cout << "Perímetro del cuadrado: " << resultado << endl;
            break;
        case 2:
            cout << "Ingresa el radio del círculo: ";
            cin >> radio;
            Geometria::Circulo circulo(radio);
            resultado = circulo.calcularArea();
            cout << "Área del círculo: " << resultado << endl;
            resultado = circulo.calcularPerimetro();
            cout << "Circunferencia del círculo: " << resultado << endl;
            break;
        case 3:
            cout << "Ingresa la base del triángulo: ";
            cin >> base;
            cout << "Ingresa la altura del triángulo: ";
            cin >> altura;
            Geometria::Triangulo triangulo(base, altura);
            resultado = triangulo.calcularArea();
            cout << "Área del triángulo: " << resultado << endl;
            resultado = triangulo.calcularPerimetro();
            cout << "Perímetro del triángulo: " << resultado << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
